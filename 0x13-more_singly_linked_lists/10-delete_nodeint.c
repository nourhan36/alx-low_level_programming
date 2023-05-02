#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: pointer to node number one
 * @ind: node index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int ind)
{
	listint_t *deletetemp = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (ind == 0)
	{
		*head = (*head)->next;
		deletetemp->next = NULL;
		free(deletetemp);
	}

	for (i = 0; i < ind - 1; i++)
	{
		if ((deletetemp == NULL) || (deletetemp->next == NULL))
			return (-1);
		deletetemp = deletetemp->next;
		i++;
	}


	temp = deletetemp->next;
	deletetemp->next = temp->next;
	free(temp);

	return (1);
}
