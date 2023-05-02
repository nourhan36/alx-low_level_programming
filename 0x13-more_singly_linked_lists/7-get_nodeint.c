#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a selected index
 * @head: pointer to node number one
 * @ind: node index
 *
 * Return: pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int ind)
{
	unsigned int counter = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (counter == ind)
			return (current);
		current = current->next;
		counter++;
	}

}
