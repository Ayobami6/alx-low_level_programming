#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *tmp = NULL;

	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = tmp;
	}

	*head = node;

	return (*head);
}
