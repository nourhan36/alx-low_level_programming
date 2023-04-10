#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @x: memory to be filled
 * @y: value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *x, char y, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		x[i] = y;
		n--;
	}
	return (x);
}
