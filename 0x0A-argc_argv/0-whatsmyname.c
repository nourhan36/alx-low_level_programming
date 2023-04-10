#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @c: number of arguments
 * @a: array of arguments
 *
 * Return: 0
 */
int main(int c __attribute__((unused)), char *a[])
{
	printf("%s\n", *a);

	return (0);
}
