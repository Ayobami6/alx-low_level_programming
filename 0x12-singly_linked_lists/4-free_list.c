#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
