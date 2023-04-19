#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print every element in new line
 * @arr: array
 * @len: number of printed numbers
 * @ptr: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *arr, size_t len, void (*ptr)(int))
{
	unsigned int i;

	if (arr == NULL || ptr == NULL)
		return;

	for (i = 0; i < len; i++)
	{
		ptr(arr[i]);
	}
}
