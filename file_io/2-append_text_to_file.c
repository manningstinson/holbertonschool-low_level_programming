#include <stdio.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content)
{
    FILE *file;

    if (filename == NULL)
        return -1;

    file = fopen(filename, "a");
    if (file == NULL)
        return -1;

    if (text_content != NULL)
        fputs(text_content, file);

    fclose(file);

    return 1;
}
