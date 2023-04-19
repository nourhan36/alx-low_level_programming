#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own operator codes.
 * @num: number of arguments
 * @arrg: array of arguments
 *
 * Return: 0
 */
int main(int num, char *arrg[])
{
	int bytes, i;
	char *arr;

	if (num != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(arrg[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
