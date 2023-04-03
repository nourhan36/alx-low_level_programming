#include "main.h"
/**
 * _strstr - returns pointer to the first occurrence of the matched string
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *p = needle;

		while (*x == *p && *p != '\0')
		{
			x++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
