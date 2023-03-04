#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * of a list
 * @h: pointer to the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}

	return (n);
}
