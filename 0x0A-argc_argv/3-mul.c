#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @x: string
 *
 * Return: the int converted from the string
 */
int _atoi(char *x)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (x[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (x[i] == '-')
			++d;

		if (x[i] >= '0' && x[i] <= '9')
		{
			digit = x[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (x[i + 1] < '0' || x[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @c: number of arguments
 * @a: array of arguments
 *
 * Return: 0 or 1
 */
int main(int c, char *a[])
{
	int result, num1, num2;

	if (c < 3 || c > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(a[1]);
	num2 = _atoi(a[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
