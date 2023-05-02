#include "lists.h"

/**
 * sum_listint - add all data in the linked list
 * @head: pointer to node number one
 *
 * Return: total calculated sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		total += current->x;
		current = current->next;
	}

	return (total);
}
