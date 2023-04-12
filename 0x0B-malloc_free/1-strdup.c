#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @x: char
 * Return: 0
 */
char *_strdup(char *x)
{
	char *y;
	int i, r = 0;

	if (x == NULL)
		return (NULL);
	i = 0;
	while (x[i] != '\0')
		i++;

	y = malloc(sizeof(char) * (i + 1));

	if (y == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		y[r] = str[r];

	return (y);
}
