#include "lists.h"

/**
 * add_nodeint_end - add new node at end of single linked list
 * @head: pointer to node number one
 * @data: data to be inserted in node
 *
 * Return: pointer to node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (newnode == NULL)
		return (NULL);

	newnode->data = data;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newnode;

	return (newnode);
}
