#include "main.h"
/**
 * _strcmp - compare string values
 * @x: input
 * @y: input
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *x, char *y)
{
	int i;

	i = 0;
	while (x[i] != '\0' && y[i] != '\0')
	{
		if (x[i] != y[i])
		{
			return (x[i] - y[i]);
		}
	i++;
	}
	return (0);
}
