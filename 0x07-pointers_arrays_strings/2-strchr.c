#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate first appearance
 * Return: pointer to first appearance (success)
 * 0 (character not found)
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}
