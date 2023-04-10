#include "main.h"
/**
 * _strcat - concatenates two strings
 * @x: first string
 * @y: second string
 *
 * Return: void
 */
char *_strcat(char *x, char *y)
{
	int i;
	int j;

	i = 0;
	while (x[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (y[j] != '\0')
	{
		x[i] = y[j];
		i++;
		j++;
	}

	x[i] = '\0';
	return (x);
}
