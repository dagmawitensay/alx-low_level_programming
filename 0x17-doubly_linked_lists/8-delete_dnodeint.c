#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes element at given index
 * @head: pointer to the head of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if deleted -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *previous = NULL;
	dlistint_t *start = *head;
	unsigned int len = 0, i = 0;

	if (*head == NULL)
		return (-1);
	while (start->next != NULL)
	{
		len++;
		start = start->next;
	}
	len++;
	if (index > len)
		return (-1);
	if (index == 0)
	{
		if  (len != 1)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		return (1);
	}
	if (index  == len)
	{
		start->prev->next = NULL;
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			previous->next = current->next;
			current->next->prev = previous;
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}
