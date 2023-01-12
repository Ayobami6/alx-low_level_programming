#include "lists.h"

/**
 * sum_dlistint - get the sum of all the int data of dll
 * @head: head of dll
 * Return: sum of all int in a dll
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	tmp = head;
	for (sum = 0; tmp; tmp = tmp->next)
		sum += tmp->n;

	return (sum);
}
