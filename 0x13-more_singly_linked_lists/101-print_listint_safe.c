#include "lists.h"
#include <inttypes.h>

size_t uniqueLen(const listint_t *head);

/**
 * print_listint_safe - print the elements of listin_t safe mode
 * @h: listint_t
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t i = 0, count;

	count = uniqueLen(h);
	if (count != 0)
	{
		while (i < count)
		{
			printf("[%0#lx] %d\n", (uintptr_t)h, h->n);
			h = h->next;
			i++;
		}
		printf("-> [%0#lx] %d\n", (uintptr_t)h, h->n);
	}
	else
	{
		while (h != NULL)
		{
			printf("[%0#lx] %d\n", (uintptr_t)h, h->n);
			 h = h->next;
			 count++;
		}
	}

	return (count);
}

/**
 * uniqueLen - count the length of the unique elements
 * @head: head of the list
 * Return: size of the list
 */
size_t uniqueLen(const listint_t *head)
{
	const listint_t *prev, *curr;
	size_t count = 1;

	if (head == NULL)
		return (0);

	prev = head->next;
	curr = (head->next)->next;

	while (curr)
	{
		if (prev == curr)
		{
			prev = head;
			while (prev != curr)
			{
				count++;
				prev = prev->next;
				curr = curr->next;
			}

			prev = prev->next;
			while (prev != curr)
			{
				count++;
				prev = prev->next;
			}

			return (count);
		}

		prev = prev->next;
		curr = (curr->next)->next;
	}

	return (0);
}
