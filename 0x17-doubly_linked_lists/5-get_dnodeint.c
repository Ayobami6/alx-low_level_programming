#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a `dlistint_t` doubly LL
 * @head: pointer to head of LL
 * @index: node index to return
 * Return: node at index given or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    tmp = head;
    for (i = 0; tmp && i < index; tmp = tmp->next, i++)
        ;

    return (tmp);
}
