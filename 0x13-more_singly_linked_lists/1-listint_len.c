#include "lists.h"

/**
 * listint_len - counts number of elements in a single linked list
 * @lst: linked list
 *
 * Return: number of existed nodes
 */
size_t listint_len(const listint_t *lst)
{
	size_t counter = 0;

	while (lst)
	{
		counter++;
		lst = lst->next;
	}

	return (counter);
}
