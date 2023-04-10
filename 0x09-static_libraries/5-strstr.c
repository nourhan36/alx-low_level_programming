#include "main.h"
/**
 * _strstr - Entry point
 * @x: input
 * @y: input
 * Return: 0
 */
char *_strstr(char *x, char *y)
{
	for (; *x != '\0'; x++)
	{
		char *l = x;
		char *p = y;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (x);
	}

	return (0);
}
