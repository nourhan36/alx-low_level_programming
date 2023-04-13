#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @m: memory area
 * @c: char
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area m
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (m);
}

/**
 * *_calloc - allocates memory for an array
 * @arr: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int arr, unsigned int size)
{
	char *ptr;

	if (arr == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * arr);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, arr * size);

	return (ptr);
}
