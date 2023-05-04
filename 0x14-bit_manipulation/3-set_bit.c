#include "main.h"

/**
 * set_bit - sets a bit to an index to 1
 * @ptr: pointer to number
 * @idx: index of bit
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *ptr, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*ptr = ((1UL << idx) | *ptr);
	return (1);
}
