#include "lists.h"
#include <stdlib.h>
#include <inttypes.h>

/**
 * print_listint_safe - print the elements of listin_t safe mode
 *
 * @h: listint_t
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		exit(98);

	while (h != NULL)
	{
		printf("[%0#lx] %d\n", (uintptr_t)h, h->n);
		if (h <= h->next)
		{
			h = h->next;
			printf("-> [%0#lx] %d\n", (uintptr_t)h, h->n);
			nodes++;
			break;
		}

		h = h->next;
		nodes++;
	}
	return (nodes);
}
