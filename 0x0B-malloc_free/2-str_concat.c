#include "main.h"
#include <string.h>

/**
 * str_concat - concatenate tow strings
 * @s1: string
 * @s2: string
 * Return: pointer to string | NULL (failed)
 */

char *str_concat(char *s1, char *s2)
{
	char *txt;

	txt = malloc(strlen(s1) + strlen(s2) + 1);

	/*check if malloc failed */
	if (txt == NULL)
		return (NULL);

	if (s1 == NULL && s2 == NULL)
		strcpy(txt, "\0");
	else if (s1 == NULL)
		strcpy(txt, s2);
	else if (s2 == NULL)
		strcpy(txt, s1);
	else
	{
		strcpy(txt, s1);
		strcat(txt, s2);
	}
	return (txt);
}
