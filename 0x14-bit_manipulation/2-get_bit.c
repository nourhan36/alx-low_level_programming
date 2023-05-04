#include "main.h"

/**
 * get_bit - returns value of a bit
 * @num: number
 * @idx: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int num, unsigned int idx)
{
	int bit_val;

	if (idx > 63)
		return (-1);

	bit_val = (num >> idx) & 1;

	return (bit_val);
}
