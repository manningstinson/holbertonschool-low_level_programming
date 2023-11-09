#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "lists.h"

ssize_t _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;
    char *buffer;
    ssize_t bytes_read;
    ssize_t bytes_written = 0;

    if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(fd);
        return 0;
    }

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        close(fd);
        free(buffer);
        return 0;
    }

    if (bytes_read > 0)
        bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    close(fd);
    free(buffer);

    if (bytes_written != bytes_read)
        return 0;

    return bytes_written;
}

ssize_t _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}

