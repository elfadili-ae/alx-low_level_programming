#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a listint_t
 * @head: listint_t's head
 * Return: adress of the new node | NULL (failed)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
