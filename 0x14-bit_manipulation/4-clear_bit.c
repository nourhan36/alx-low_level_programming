#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @ptr: pointer to number
 * @idx: index of bit
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *ptr, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*ptr = (~(1UL << idx) & *ptr);
	return (1);
}
