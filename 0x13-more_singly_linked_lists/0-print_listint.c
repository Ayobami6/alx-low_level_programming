#include "lists.h"

/**
 * print_listint - print integers in the list
 * @h: linked list
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
