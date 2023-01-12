#include "lists.h"

/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes in LL
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
