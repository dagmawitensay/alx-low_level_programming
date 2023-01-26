#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints elemets of the linke
 * list and returns the number of elements
 * @h: given linked list
 * Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
