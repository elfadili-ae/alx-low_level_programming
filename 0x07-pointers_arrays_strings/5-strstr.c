#include "main.h"

/**
 * _strstr - get the first occurence of a substring
 * @s: string
 * @a: substring
 * Return: pointer to the substring or 0 (nothing found)
 */

char *_strstr(char *s, char *a)
{
	int i, len, checker = 0;

	len = (int) strlen(a);

	for (i = 0; i < (int) strlen(s); i++)
	{
		if (s[i] == a[0])
		{
			checker++;
			i++;
		}
		if (checker > 0)
		{
			if (checker < len)
				checker++;
			else
				checker = 0;
			if (checker == len)
				return (&s[i - checker + 1]);
		}
	}
	return (0);
}
