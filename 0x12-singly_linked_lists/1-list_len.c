#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the length of the
 * given linked list
 * @h: the given linked list
 * Return: length of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
