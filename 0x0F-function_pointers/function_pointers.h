#ifndef POINT_H
#define POINT_H
#include <stddef.h>

/**
 * Function prototypes
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* POINT_H */
