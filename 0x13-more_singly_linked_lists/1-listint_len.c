#include "lists.h"

/**
 * listint_len - number of elements in listin_t
 * @h: listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
