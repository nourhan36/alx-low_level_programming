#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @x: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *x)
{
	int longit = 0;

	if (*x)
	{
		longit++;
		longit += _strlen_recursion(x + 1);
	}

	return (longit);
}
