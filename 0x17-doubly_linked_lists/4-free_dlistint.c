#include "lists.h"

/**
 * free_dlistint - free a `dlistint_t` doubly linked list
 * @head: head of LL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *hold;

	if (head == NULL)
		return;

	while (head->prev)
		head = head->prev;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
