#include "main.h"
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    int file_descriptor;
    char buffer[1024];
    ssize_t total_read = 0;
    ssize_t read_result;
    ssize_t write_result;

    if (filename == NULL) {
        return 0;
    }

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1) {
        return 0;
    }

    while ((read_result = read(file_descriptor, buffer, sizeof(buffer))) > 0 && total_read < letters) {
        write_result = write(STDOUT_FILENO, buffer, (size_t)read_result);
        if (write_result != read_result || write_result == -1) {
            close(file_descriptor);
            return 0;
        }

        total_read += read_result;
    }

    close(file_descriptor);
    return total_read;
}
