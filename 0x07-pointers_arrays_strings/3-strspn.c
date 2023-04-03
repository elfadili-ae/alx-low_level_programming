#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @a: bytes accepted
 * Return: length of the substring or 0
 */

unsigned int _strspn(char *s, char *a)
{
	int i, j, checker = 1;

	for (i = 0; i < (int) strlen(s); i++)
	{
		if (checker == 0)
			return (i - 1);
		for (j = 0; j < (int) strlen(a); j++)
		{
			if (s[i] == a[j])
			{
				checker = 1;
				break;
			}
			else
				checker = 0;
		}
	}
	return (0);
}
