#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of
 * a linked list
 * @head: pointer to the head of the linked list
 * @n: value to be added to the node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	new->next = temp;
	*head = new;
	return (new);
}
