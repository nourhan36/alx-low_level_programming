#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @str: struct to be printed
 */
void print_dog(struct dog *str)
{
	if (str == NULL)
		return;

	if (str->name == NULL)
		str->name = "(nil)";
	if (str->owner == NULL)
		str->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", str->name, str->age, str->owner);
}
