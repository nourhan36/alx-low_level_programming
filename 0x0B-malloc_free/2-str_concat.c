#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of two input and add them together
 * @x: first input
 * @y: second input
 * Return: concatatenate of x and y
 */
char *str_concat(char *x, char *y)
{
	char *conct;
	int i, j;

	if (x == NULL)
		x = "";
	if (y == NULL)
		y = "";

	i = j = 0;
	while (x[i] != '\0')
		i++;
	while (y[j] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + j + 1));

	if (conct == NULL)
		return (NULL);
	i = j = 0;
	while (x[i] != '\0')
	{
		conct[i] = x[i];
		i++;
	}

	while (y[j] != '\0')
	{
		conct[i] = y[j];
		i++, j++;
	}
	conct[i] = '\0';
	return (conct);
}
