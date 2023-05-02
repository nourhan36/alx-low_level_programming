#include "lists.h"

/**
 * pop_listint - deletes the linked list from the beginning
 * @head: pointer to node number one
 *
 * Return: the deleted data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *item;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->x;
	item = (*head)->next;
	free(*head);
	*head = item;

	return (data);
}
