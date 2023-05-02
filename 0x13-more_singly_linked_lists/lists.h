#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @x: integer
 * @next: the next node
 *
 * Description: single linked list
 */
typedef struct listint_s
{
	int x;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *lst);
size_t listint_len(const listint_t *lst);
listint_t *add_nodeint(listint_t **head, const int data);
listint_t *add_nodeint_end(listint_t **head, const int data);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int ind);
int sum_listint(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int ind);
void free_listint(listint_t *head);
int pop_listint(listint_t **head);
listint_t *reverse_listint(listint_t **head);

#endif
