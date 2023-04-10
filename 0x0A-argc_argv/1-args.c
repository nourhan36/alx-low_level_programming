#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @c: number of arguments
 * @a: array of arguments
 *
 * Return: 0
 */

int main(int c, char *a[])
{
(void) a; /*Ignore a*/
	printf("%d\n", c - 1);

	return (0);
}
