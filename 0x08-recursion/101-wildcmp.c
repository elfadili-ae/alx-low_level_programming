#include "main.h"

/**
* wildcmp - compare two strings
* @s1: first string
* @s2: second string (can contain wildcard)
* Return: 1 (identical) 0 (not identical)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*(s1 - 1) != *(s2 - 1))
			return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != *s2 && *s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 != *s2 && *s1 != '\0' && *s2 != '\0')
	{
		if (*(s2 - 1) == '*')
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
