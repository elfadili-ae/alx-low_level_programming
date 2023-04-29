#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete element at index
 * @head: listint_t's head
 * @index: index to delete
 * Return: adress of the new node | NULL (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *delme, *curr = *head;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);

	if (index > 0)
	{
		while (curr->next != NULL)
		{
			if (i == (index - 1))
			{
				break;
			}
			i++;
			curr = curr->next;
		}
		prev = curr;
		if (curr->next == NULL)
			return (-1);
		delme = curr->next;
		if (delme->next == NULL)
		{
			free(delme);
			prev->next = NULL;
		}
		else
		{
			prev->next = delme->next;
			free(delme);
		}
	}
	else
	{
		delme = (*head);
		(*head) = (*head)->next;
		free(delme);
	}

	return (1);
}
