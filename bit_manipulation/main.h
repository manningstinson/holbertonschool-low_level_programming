#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>


int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);


#endif /* MAIN_H */

