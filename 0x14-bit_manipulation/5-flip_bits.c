#include "main.h"

/**
 * flip_bits - counts number of bits
 * @st: the 1st number
 * @nd: the 2nd number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int st, unsigned long int nd)
{
	int j, counter = 0;
	unsigned long int curr;
	unsigned long int excl = st ^ nd;

	for (j = 63; j >= 0; j--)
	{
		curr = excl >> j;
		if (curr & 1)
			counter++;
	}

	return (counter);
}
