#include "main.h"
/**
 *_memcpy - copies memory area
 *@x: where is stored memory
 *@y: where is copied memory
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *x, char *y, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		x[r] = y[r];
		n--;
	}
	return (x);
}
