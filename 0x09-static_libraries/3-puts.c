#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @x: input
 */
void _puts(char *x)
{
	while (*x != '\0')
	{
		_putchar(*x++);
	}
		_putchar('\n');
}
