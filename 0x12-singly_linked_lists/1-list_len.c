#include <stdio.h>
#include "lists.h"

/**
 * list_len - print the len of a linked list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}

	return (node);
}
