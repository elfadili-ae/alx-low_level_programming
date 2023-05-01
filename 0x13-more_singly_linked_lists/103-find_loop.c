#include "lists.h"
#include <inttypes.h>

/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of the list
 * Return: adress of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				slow = slow->next;
			}

			return (fast);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (NULL);
}
