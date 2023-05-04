#include "main.h"

/**
 * binary_to_uint - change a binary to int
 * @str: binary number
 *
 * Return: the number
 */
unsigned int binary_to_uint(const char *str)
{
	int j;
	unsigned int dec_val = 0;

	if (!str)
		return (0);

	for (j = 0; str[j]; j++)
	{
		if (str[j] < '0' || str[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (str[j] - '0');
	}

	return (dec_val);
}
