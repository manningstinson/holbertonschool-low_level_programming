#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct list_s {
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif /* LISTS_H */

