#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - adds a new node at the beginning of a list_t list
 * @h: list_t list
 *
 * Return: return the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
