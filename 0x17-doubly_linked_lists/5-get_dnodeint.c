#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at a given
 * index
 * @head:  pointer to the head of the linked list
 * @index: index of node to be found
 * Return: node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
