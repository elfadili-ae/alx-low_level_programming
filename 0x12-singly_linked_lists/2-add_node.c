#include "lists.h"
#include <string.h>

/**
 * add_node - number of elements in a linked list
 * @head: linked list's head
 * @str: string to copy in the new element
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	/*Allocate memory for newNode*/
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	/*Fill the newNode*/
	newNode->str = strdup(str);
	while (str[len] != '\0')
		len++;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
