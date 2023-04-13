#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @minimum: minimum range of values
 * @maximum: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int minimum, int maximum)
{
	int *ptr;
	int i, size;

	if (minimum > maximum)
		return (NULL);

	size = maximum - minimum + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; minimum <= maximum; i++)
		ptr[i] = minimum++;

	return (ptr);
}
