#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @c: number of arguments
 * @a: array of arguments
 *
 * Return: 0
 */
int main(int c, char *a[])
{
	int i;

	for (i = 0; i < c; i++)
	{
		printf("%s\n", a[i]);
	}

	return (0);
}
