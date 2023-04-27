#include "lists.h"
#include <stdio.h>

/**
 * print_list - print a linked list
 * @h: linked list
 * Return: number of nodes in @h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	char *s;

	while (h != NULL)
	{
		s = h->str ? h->str : "(nil)";
		printf("[%d] %s\n", h->len, s);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
