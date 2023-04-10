#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @x: string
 * Return: integer
 */

int _atoi(char *x)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(x[i] <= '9' && x[i] >= '0') && x[i] != '\0')
	{
		if (x[i] == '-')
			sign *= -1;
		i++;
	}
	while (x[i] <= '9' && (x[i] >= '0' && x[i] != '\0'))
	{
		res = (res * 10) + (x[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
