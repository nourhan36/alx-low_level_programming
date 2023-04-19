#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints a result of an operation
 * @arg: number of arguments
 * @arr:marray of pointers
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) arg, char *arr[])
{
	int x, y;
	char *op;

	if (arg != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(arr[1]);
	op = arr[2];
	y = atoi(arr[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && y == 0) ||
	    (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(x, y));

	return (0);
}
