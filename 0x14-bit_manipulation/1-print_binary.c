#include "main.h"

/**
 * print_binary - prints the binary that equal to decimal
 * @bin: binary number
 */
void print_binary(unsigned long int bin)
{
	int j, counter = 0;
	unsigned long int curr;

	for (j = 63; j >= 0; i--)
	{
		curr = bin >> j;

		if (curr & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
