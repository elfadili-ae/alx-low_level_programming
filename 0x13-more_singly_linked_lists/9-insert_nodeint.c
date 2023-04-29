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
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	newNode->n = n;
	while (tmp->next != NULL)
	{
		if ((i + 1) == idx)
			break;
		else
		{
			i++;
			tmp = tmp->next;
		}
	}
	/*link idx to (idx + 1)*/
	if (tmp != NULL)
		newNode->next = tmp->next;
	else
		newNode->next = NULL;

	/*link (idx - 1) to idx */
	tmp->next = newNode;

	return (newNode);
}
