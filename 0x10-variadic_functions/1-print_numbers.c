#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Print numbers, followed by a new line.
* @sep: string between numbers.
* @x: The number of integers in function.
* @y: A variable number of numbers to be printed.
*/
void print_numbers(const char *sep, const unsigned int x, y)
{
	va_list nums;
	unsigned int index;

	va_start(nums, x);

	for (index = 0; index < x; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (x - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(nums);
}
