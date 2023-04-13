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
	unsigned int i = 0, pos;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (p == NULL)
		return NULL;

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	pos = i;
	if (n >= strlen(s2))
	{
		while (s2[i])
		{
			p[i] = s2[i];
			i++;
		}
	}
	else
	{
		while ((i - pos) < n)
		{
			p[i] = s2[i - pos];
			i++;
		}
	}
	p[i] = '\0';
	return (p);
}
