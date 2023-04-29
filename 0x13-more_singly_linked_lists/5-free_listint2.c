#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a listint_t
 * @head: listint_t's head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = (*head);
			(*head) = (*head)->next;
			free(tmp);
		}
		free(*head);
		*head = NULL;
	}
}
