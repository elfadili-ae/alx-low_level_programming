#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add an element toa listint_t
 * @head: listint_t's head
 * @n: int value
 * Return: adress of the new node | NULL (failed)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
