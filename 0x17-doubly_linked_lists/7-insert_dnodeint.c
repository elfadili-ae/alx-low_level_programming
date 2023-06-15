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
	unsigned int count = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		if (tmp != NULL)
		{
			while (tmp)
			{
				if (count == idx || (tmp)->next == NULL)
					break;
				tmp = (tmp)->next;
				count++;
			}
			if (tmp->prev)
			{
				tmp->prev->next = newNode;
				tmp->prev = newNode;
				newNode->prev =  tmp->prev->next;
				newNode->next = tmp;
			}
		}
		else
			*h = newNode;
		return (newNode);
	}
	return (NULL);
}
