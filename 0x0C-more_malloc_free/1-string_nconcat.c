#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string
 * Return: pointer to concatenated | NULL (failed)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, pos, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = n >= strlen(s2)? strlen(s2) : n;
	p = malloc(strlen(s1) + len + 1);
	if (p == NULL)
		return NULL;

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	pos = i;

	while ((i - pos) < len)
	{
		p[i] = s2[i - pos];
		i++;
	}

	p[i] = '\0';
	return (p);
}
