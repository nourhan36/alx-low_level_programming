#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Returns the sum of all paramters.
* @x: number of paramters.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: 0 or the sum of all parameters.
*/
int sum_them_all(const unsigned int x, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, x);

	for (i = 0; i < x; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
