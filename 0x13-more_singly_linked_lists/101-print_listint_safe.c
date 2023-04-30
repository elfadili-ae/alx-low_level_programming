#include "lists.h"
#include <stdlib.h>
#include <inttypes.h>

const listint_t **re_listint(const listint_t**, const listint_t*, int);
/**
 * print_listint_safe - print the elements of listin_t safe mode
 *
 * @h: listint_t
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	int index, nodes = 0;
	const listint_t **bak = NULL;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		for (index = 0; index < nodes - 1; index++)
		{
			if (h == bak[index])
			{
				free(bak);
				printf("-> [%0#lx] %d\n", (uintptr_t)h, h->n);
				return (nodes);
			}
		}
		nodes++;
		printf("[%0#lx] %d\n", (uintptr_t)h, h->n);
		bak = re_listint(bak, h, nodes);
		h = h->next;
	}
	free(bak);
	return (nodes);
}

/**
 * re_listint - add element and re-allocate memory for listint_t
 * @bak: listint_t's head
 * @o: listint_t origin
 * @s: list size
 * Return: adress to the new list | NULL (failed)
 */
const listint_t **re_listint(const listint_t **bak, const listint_t *o, int s)
{
	const listint_t **newLinked;
	int i = 0;

	newLinked = malloc(sizeof(listint_t) * s);
	if (newLinked == NULL)
	{
		free(bak);
		exit(98);
	}
	while (i < (s - 1))
	{
		newLinked[i] = bak[i];
		i++;
	}
	newLinked[i] = o;
	free(bak);
	return (newLinked);
}
