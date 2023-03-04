#include "lists.h"
#include <stdlib.h>
/*
 * add_node - function that adds a node at the begning of
 * a list
 * @head: pointer to the head of the list
 * @n: value to be added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	*head = new;

	return (*head);
}
