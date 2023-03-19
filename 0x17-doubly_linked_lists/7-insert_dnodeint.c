#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a
 * given index
 * @h: pointer to the head of the linked list
 * @idx: index of insertion
 * @n: value of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *previous = NULL, *start = *h;
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int  len = 0, i = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	while (start != NULL)
	{
		len++;
		start = start->next;
	}

	if (idx >= len)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		{
			free(new);
			return (NULL);
		}

	new->n = n;

	while (current != NULL)
	{
		if (i == idx)
		{
			new->prev = previous;
			new->next = current;
			previous->next = new;
			current->prev = new;
			return (new);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (NULL);
}
