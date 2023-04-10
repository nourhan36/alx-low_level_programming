#include "main.h"
/**
 * _strspn - Entry point
 * @x: input
 * @y: input
 * Return: 0
 */
unsigned int _strspn(char *x, char *y)
{
	unsigned int n = 0;
	int r;

	while (*x)
	{
		for (r = 0; y[r]; r++)
		{
			if (*x == y[r])
			{
				n++;
				break;
			}
			else if (y[r + 1] == '\0')
				return (n);
		}
		x++;
	}
	return (n);
}
