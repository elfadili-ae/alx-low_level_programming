#include "main.h"

/**
 * _strpbrk - get the character that appears in s
 * @s: string
 * @a: bytes accepted
 * Return: first a match or 0 (nothing found)
 */

char *_strpbrk(char *s, char *a)
{
	int i, j;

	for (i = 0; i < (int) strlen(s); i++)
	{
		for (j = 0; j < (int) strlen(a); j++)
		{
			if (s[i] == a[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return (0);
}
