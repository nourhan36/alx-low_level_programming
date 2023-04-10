#include "main.h"
/**
 * _strncpy - copy a string
 * @x: input
 * @y: input
 * @n: input
 *
 * Return: x
 */
char *_strncpy(char *x, char *y, int n)
{
	int j;

	j = 0;
	while (j < n && y[j] != '\0')
	{
		x[j] = y[j];
		j++;
	}
	while (j < n)
	{
		x[j] = '\0';
		j++;
	}

	return (x);
}
