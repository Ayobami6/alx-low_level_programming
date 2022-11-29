#include "lists.h"

/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (num);
}
