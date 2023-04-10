#include "main.h"
/**
 * _strncat - concatenate two strings
 * @x: input
 * @y: input
 * @n: input
 *
 * Return: x
 */
char *_strncat(char *x, char *y, int n)
{
	int i;
	int j;

	i = 0;
	while (x[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && y[j] != '\0')
	{
	x[i] = y[j];
	i++;
	j++;
	}
	x[i] = '\0';
	return (x);
}
