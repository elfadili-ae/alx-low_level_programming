#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a listint_t
 * @head: listint_t's head
 * Return: adress of the new node | NULL (failed)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	tmp = *head;
	*head = NULL;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}
