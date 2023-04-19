#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *str, void (*fun)(char *));
int _putchar(char c);
void array_iterator(int *arr, size_t len, void (*ptr)(int));
int int_index(int *arr, int len, int (*ptr)(int));

#endif
