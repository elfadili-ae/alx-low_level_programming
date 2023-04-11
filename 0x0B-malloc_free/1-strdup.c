#include "main.h"

/**
 * _strdup - copy a str in a new pointer
 * @str: string to copy
 * Return: pointer to string | NULL (failed)
 */

char *_strdup(char *str)
{
	int i;
	char *txt;

	/* check if str is NULL */
	if (str == NULL)
		return (NULL);
	txt = malloc(sizeof(str));

	/*check if malloc failed */
	if (txt == NULL)
		return (NULL);
	/*copy str into txt*/
	for (i = 0; str[i] != '\0'; i++)
		txt[i] = str[i];
	return (txt);
}
