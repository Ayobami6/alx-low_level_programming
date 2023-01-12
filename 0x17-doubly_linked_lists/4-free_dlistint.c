#include "lists.h"

/**
 * free_dlistint - free a dll
 * @head: head of dll
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *hold;

	if (head == NULL)
		return;

	tmp = head;
	while (tmp->prev)
		tmp = tmp->prev;
	while (tmp)
	{
		hold = tmp;
		tmp = tmp->next;
		free(hold);
	}
}
