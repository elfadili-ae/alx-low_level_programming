#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - number of elements in a linked list
 * @h: linked list
 * Return: number of elements in @h
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	/*Allocate memory for newNode*/
	newNode= (list_t *) malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	/*Fill the newNode*/
	newNode->str = strdup(str);
	newNode->len = strlen(newNode->str);
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
