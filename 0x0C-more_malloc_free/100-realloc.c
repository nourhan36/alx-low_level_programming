#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @size1: old size
 * @size2: new size
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int size1, unsigned int size2)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (size2 == size1)
		return (ptr);

	if (size2 == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(size2));

	ptr1 = malloc(size2);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (size2 < size1)
	{
		for (i = 0; i < size2; i++)
			ptr1[i] = old_ptr[i];
	}

	if (size2 > size1)
	{
		for (i = 0; i < size1; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
