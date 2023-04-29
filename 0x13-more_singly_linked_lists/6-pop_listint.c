#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pop an element of a listint_t
 * @head: listint_t's head
 * @n: int value
 * Return: adress of the new node | NULL (failed)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int val = 0;

	if (*head == NULL)
		return (val);

	val = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (val);
}
