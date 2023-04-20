#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Print strings, followed by a new line.
* @sep: The string to be printed between strings.
* @x: number of strings in function.
* @y: number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *sep, const unsigned int x, y)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, x);

	for (index = 0; index < x; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (x - 1) && sep != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
