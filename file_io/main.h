#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>


int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif

