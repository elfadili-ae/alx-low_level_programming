#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate first appearance
 * Return: pointer to first appearance (success)
 * NULL (character not found)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
