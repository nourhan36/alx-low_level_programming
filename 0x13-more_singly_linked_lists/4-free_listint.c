#include "lists.h"

/**
 * free_listint - free the single linked list
 * @head: the list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *item;

	while (head != NULL)
	{
		item = head->next;
		free(head);
		head = item;
	}
}
