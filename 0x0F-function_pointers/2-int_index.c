#include "function_pointers.h"
/**
 * int_index - return index place
 * @arr: array
 * @len: number of elements in array
 * @ptr: pointer
 * Return: 0
 */
int int_index(int *arr, int len, int (*ptr)(int))
{
	int i;

	if (arr == NULL || len <= 0 || ptr == NULL)
		return (-1);

	for (i = 0; i < len; i++)
	{
		if (ptr(arr[i]))
			return (i);
	}
	return (-1);
}
