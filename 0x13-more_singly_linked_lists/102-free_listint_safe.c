#include "lists.h"
#include <stdlib.h>

size_t floydLen(listint_t *head);

/**
 * print_listint_safe - print the elements of listin_t safe mode
 * @h: listint_t
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, count;
	listint_t *tmp = *h;

	count = floydLen(*h);
	if (count != 0)
	{
		while (i < (count - 1))
		{
			tmp = (*h);
			(*h) = (*h)->next;
			free(tmp);
			i++;
		}
		free(*h);
		*h = NULL;
	}
	if (count == 0)
	{
		while ((*h) != NULL)
		{
			tmp = (*h);
			(*h) = (*h)->next;
			free(tmp);
		}
	}

	return (count);
}

/**
 * floydLen - count the length of the unique elements
 * Floy's cycle detection algorythm.
 * @head: head of the list
 * Return: size of the list
 */
size_t floydLen(listint_t *head)
{
	listint_t *slow, *fast;
	size_t count = 1;

	if (head == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}

			return (count);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
