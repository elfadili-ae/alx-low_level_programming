#include "lists.h"
#include <string.h>

/**
 * free_lsit - free a linked list
 * @head: linked list's head
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		head = ptr;
		ptr = head->next;
		free(head->str);
		free(head);
	}
}
