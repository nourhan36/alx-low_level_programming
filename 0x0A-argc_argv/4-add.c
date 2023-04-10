#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @arr: array str
 *
 * Return: 0
 */
int check_num(char *arr)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(arr)) /*count string*/

	{
		if (!isdigit(arr[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @c: Count arguments
 * @a: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int c, char *a[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < c) /*Goes through the whole array*/
	{
		if (check_num(a[count]))

		{
			str_to_int = atoi(a[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
