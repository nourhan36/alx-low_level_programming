#include "main.h"

int check_palindrome(char *x, int y, int len);
int _strlen_recursion(char *x);

/**
 * is_palindrome - checks if a string is a palindrome
 * @x: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *x)
{
	if (*x == 0)
		return (1);
	return (check_palindrome(x, 0, _strlen_recursion(x)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @x: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *x)
{
	if (*x == '\0')
		return (0);
	return (1 + _strlen_recursion(x + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @x: string to check
 * @y: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *x, int y, int len)
{
	if (*(x + y) != *(x + len - 1))
		return (0);
	if (y >= len)
		return (1);
	return (check_palindrome(x, y + 1, len - 1));
}
