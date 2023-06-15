#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at the index of doubly lniked list
 * @h: head of the linked list
 * @idx: index of the new node
 * @n: data value
 * Return: adress of new element | NULL (failed)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h;
	unsigned int i = 0, brCheck = 0;

	if (h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n, newNode->next = NULL, newNode->prev = NULL;
	if (idx > 0)
	{
		while (tmp->next != NULL)
		{
			if (i == idx - 1)
			{
				brCheck = 1;
				break;
			}
			tmp = tmp->next, i++;
		}
		if (!brCheck && i < idx - 1)
		{
			free(newNode);
			return (NULL);
		}
		if (tmp != NULL)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			newNode->prev = tmp;
		}
		if (newNode->next != NULL)
			newNode->next->prev = newNode;
	} else
	{
		newNode->next = tmp;
		*h = newNode;
	}
	return (newNode);
}
