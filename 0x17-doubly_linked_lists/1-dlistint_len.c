#include "lists.h"

/**
 * dlistint_len - gets the len of doubly ll
 * @h: head pointer in dlinked list
 * Return: len of dll
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
