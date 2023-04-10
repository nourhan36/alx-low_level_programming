#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @x: input character
 * Return: 1 or 0
 */
int _isalpha(int x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}
