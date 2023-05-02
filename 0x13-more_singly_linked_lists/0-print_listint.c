#include "lists.h"

/**
 * print_listint - prints elements in single linked list
 * @lst: linked list elements to print
 *
 * Return: number of existed nodes
 */
size_t print_listint(const listint_t *lst)
{
	size_t counter = 0;

	while (lst)
	{
		printf("%d\n", lst->n);
		counter++;
		lst = lst->next;
	}

	return (counter);
}
