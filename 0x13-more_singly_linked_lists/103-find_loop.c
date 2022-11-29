#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of a linked list
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp1 = head;
	listint_t *tmp2 = head;

	if (!head)
		return (NULL);

	do {
		if (tmp1->next)
			tmp1 = tmp1->next;
		else
			return (NULL);

		if (tmp2->next->next)
			tmp2 = tmp2->next->next;
		else
			return (NULL);
	} while (tmp2 != tmp1);

	tmp1 = head;
	while (tmp2 != tmp1)
	{
		tmp2 = tmp2->next;
		tmp1 = tmp1->next;
	}

	return (tmp1);
}
