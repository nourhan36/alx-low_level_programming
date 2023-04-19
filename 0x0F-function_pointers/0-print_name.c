#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name by pointer
 * @str: string
 * @ptr: pointer
 * Return: nothing
 **/
void print_name(char *str, void (*ptr)(char *))
{
	if (str == NULL || ptr == NULL)
		return;

	f(str);
}
