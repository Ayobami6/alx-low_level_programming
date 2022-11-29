#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked list
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int count = 0;

	while (tmp && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	return (tmp != NULL ? tmp : NULL);
}
