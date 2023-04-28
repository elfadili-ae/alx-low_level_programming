#include "lists.h"

/**
 * print_listint - print the elements of listin_t
 * @h: listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
