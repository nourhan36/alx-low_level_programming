#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int x, ...);
void print_numbers(const char *sep, const unsigned int x, y);
void print_strings(const char *sep, const unsigned int x, y);
void print_all(const char * const args, y);

#endif
