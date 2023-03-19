#include "lists.h"

/**
 * sum_dlistint - sums the value at the nodes
 * @head: pointer to the head of the linked list
 * Return: sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
