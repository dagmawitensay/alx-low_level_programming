#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints a doubly linked
 * list
 * @h: pointer to the head of the linked list
 * Return: number of node of the linked list
 */
size_t dlistint_len(const dlistint_t *h);
{
	int ctr = 0;

	while (h)
	{
		h = h->next;
		ctr++;
	}

	return (ctr);
}
