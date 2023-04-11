#include "main.h"
#include <string.h>

/**
 * _malloc - allocate memory
 * @size: size
 * Return: pointer to allocated memory | NULL (fail)
 */
char *my_malloc(int size)
{
	char *s;
	s = malloc(size);
	if (s == NULL)
		return (NULL);
	return (s);
}
/**
 * str_concat - concatenate tow strings
 * @s1: string
 * @s2: string
 * Return: pointer to string | NULL (failed)
 */

char *str_concat(char *s1, char *s2)
{
	char *txt;

	if (s1 == NULL && s2 == NULL)
	{
		txt = my_malloc(1);
		strcpy(txt, "\0");
	}
	else if (s1 == NULL)
	{
		txt = my_malloc(strlen(s2) + 1);
		strcpy(txt, s2);
	}
	else if (s2 == NULL)
	{
		txt = my_malloc(strlen(s1) + 1);
		strcpy(txt, s1);
	}
	else
	{
		txt = my_malloc(strlen(s1) + strlen(s2) + 1);
		strcpy(txt, s1);
		strcat(txt, s2);
	}
	return (txt);
}
