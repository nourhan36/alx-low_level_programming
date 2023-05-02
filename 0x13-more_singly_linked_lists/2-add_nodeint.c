#include "lists.h"

/**
 * add_nodeint - add node at first of a single linked list
 * @head: pointer to node number one
 * @data: data to be inserted in node
 *
 * Return: pointer to node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int data)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->data = data;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
