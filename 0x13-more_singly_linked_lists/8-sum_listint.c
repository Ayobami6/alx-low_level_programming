#include "lists.h"

/**
 * sum_listint - Sums all the integer data in the linked list
 * @head: pointer to head
 * Return: sum of all int n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
