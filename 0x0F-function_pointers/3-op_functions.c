#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

/**
 * op_add - Return sum of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: sum of x and y.
 */
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - Returns difference of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: difference of x and y.
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - Returns product of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: product of x and y.
 */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
 * op_div - Returns division of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: quotient of x and y.
 */
int op_div(int x, int y)
{
	return (x / y);
}
/**
 * op_mod - Returns the remainder of two numbers.
 * @x: first number.
 * @y: second number.
 *
 * Return: remainder of x and y.
 */
int op_mod(int x, int y)
{
	return (x % y);
}
