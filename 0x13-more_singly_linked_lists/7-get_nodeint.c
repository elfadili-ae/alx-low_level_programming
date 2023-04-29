#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get nth element of a element in
 * @head: listint_t's head
 * @index: element index
 * Return: adress of the element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}

	return (head);
}
