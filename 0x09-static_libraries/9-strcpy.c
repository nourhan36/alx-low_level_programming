#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @x: copy to
 * @y: copy from
 * Return: string
 */
char *_strcpy(char *x, char *y)
{
	int l = 0;
	int i = 0;

	while (*(y + l) != '\0')
	{
		l++;
	}
	for ( ; i < l ; i++)
	{
		x[i] = y[i];
	}
	x[l] = '\0';
	return (x);
}
