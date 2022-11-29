#include "lists.h"

/**
 * free_listint - free a `list_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
