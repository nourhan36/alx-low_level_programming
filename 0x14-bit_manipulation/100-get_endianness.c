#include "main.h"

/**
 * get_endianness - determine the machine if it is little or big endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *ch = (char *) &j;

	return (*ch);
}
