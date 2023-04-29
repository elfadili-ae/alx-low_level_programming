#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - add an element in
 * end of a listint_t
 * @head: listint_t's head
 * @idx: index where to insert
 * @n: int value
 * Return: adress of the new node | NULL (failed)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp = *head;
	unsigned int i = 0, brCheck = 0;

	if (*head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx > 0)
	{
		while (tmp->next != NULL)
		{
			if ((i + 1) == idx)
			{
				brCheck = 1;
				break;
			}
			i++;
			tmp = tmp->next;
		}
		if (!brCheck && (i + 1) < idx)
		{
			free(newNode);
			return (0);
		}
		if (tmp != NULL)
			newNode->next = tmp->next;
		else
			newNode->next = NULL;
		tmp->next = newNode;
	}
	else
	{
		 newNode->next = tmp;
		 (*head) = newNode;
	}
	return (newNode);
}
