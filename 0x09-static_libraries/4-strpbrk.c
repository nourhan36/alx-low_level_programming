#include "main.h"
/**
 * _strpbrk - Entry point
 * @x: input
 * @y: input
 * Return: 0
 */
char *_strpbrk(char *x, char *y)
{
	int k;

	while (*x)
	{
		for (k = 0; y[k]; k++)
		{
		if (*x == y[k])
		return (x);
		}
	x++;
	}

return ('\0');
}
