#include "list.h"

/**
 * listint_len - print integers in the list
 * @h: linked list first node
 * Return: count of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
