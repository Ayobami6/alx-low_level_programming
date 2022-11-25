#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of list_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t node = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		node++;
	}

	return (node);
}
