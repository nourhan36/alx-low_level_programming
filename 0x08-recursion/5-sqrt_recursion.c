#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x, 0));
}
