#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements in the linked list
 * @ptr: pointer
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *ptr)
	{
		size_t siz = 0;

		while (ptr)
		{
			if (!ptr->str)
			printf("[0] (nil)\n");
			else
			printf("[%u] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			siz++;
		}

		return (siz);
	}
