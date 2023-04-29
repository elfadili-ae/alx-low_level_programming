#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add an element in
 * end of a listint_t
 * @head: listint_t's head
 * @n: int value
 * Return: adress of the new node | NULL (failed)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
	}

	return (newNode);
}
