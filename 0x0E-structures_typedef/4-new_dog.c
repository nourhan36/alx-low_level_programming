#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the string length
 * @str: string
 *
 * Return: the string length
 */
int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies a string
 * @first: string we copy
 * @second: string to be copied
 *
 * Return: the pointer to first
 */
char *_strcpy(char *first, char *second)
{
	int len, i;

	len = 0;

	while (second[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		first[i] = second[i];
	}
	first[i] = '\0';

	return (first);
}

/**
 * new_dog - creates a new dog
 * @n: name of the dog
 * @a: age of the dog
 * @o: owner of the dog
 *
 * Return: pointer to the new dog or NULL
 */
dog_t *new_dog(char *n, float a, char *o)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(n);
	len2 = _strlen(o);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->n = malloc(sizeof(char) * (len1 + 1));
	if (dog->n == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->o = malloc(sizeof(char) * (len2 + 1));
	if (dog->o == NULL)
	{
		free(dog);
		free(dog->n);
		return (NULL);
	}
	_strcpy(dog->n, n);
	_strcpy(dog->o, o);
	dog->a = a;

	return (dog);
}
