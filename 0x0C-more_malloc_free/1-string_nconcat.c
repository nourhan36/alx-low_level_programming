#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @x: first string
 * @y: second string
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *x, char *y, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lenX = 0, lenY = 0;

	while (x && x[lenX])
		lenX++;
	while (y && y[lenY])
		lenY++;

	if (n < lenY)
		s = malloc(sizeof(char) * (lenX + n + 1));
	else
		s = malloc(sizeof(char) * (lenX + lenY + 1));

	if (!s)
		return (NULL);

	while (i < lenX)
	{
		s[i] = x[i];
		i++;
	}

	while (n < lenY && i < (lenX + n))
		s[i++] = y[j++];

	while (n >= lenY && i < (lenX + lenY))
		s[i++] = y[j++];

	s[i] = '\0';

	return (s);
}
