#include "lists.h"
#include <stdio.h>

/**
 * list_len - number of elements in a linked list
 * @h: linked list
 * Return: number of elements in @h
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
