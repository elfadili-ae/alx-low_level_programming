#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverse a listint_t
 * @head: listint_t's head
 * Return: value of poped element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2 = NULL;

	if (*head == NULL)
		return (*head);

	while ((*head)->next != NULL)
	{
		tmp1 = (*head);
		(*head) = (*head)->next;
		tmp1->next = tmp2;
		tmp2 = tmp1;
	}
	(*head)->next = tmp1;
	return (*head);
}
