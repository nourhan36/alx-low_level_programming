#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @x: number to evaluate
 *
 * Return: 1 if x is a prime number, 0 if not
 */
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	return (actual_prime(x, x - 1));
}
