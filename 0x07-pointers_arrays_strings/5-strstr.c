#include "main.h"

/**
 * _strstr - get the first occurence of a substring
 * @s: string
 * @a: substring
 * Return: pointer to the substring or 0 (nothing found)
 */

char *_strstr(char *s, char *a)
{
	int i, j, len, checker = 0;

	len = (int) strlen(a);
	for (i = 0; i < (int) strlen(s); i++)
	{
		for (j = 0; j < (int) strlen(a); j++)
		{
			/* return the beginnig of the first match*/
			if (checker == (len - 1))
				return (&s[i]);

			if (checker < len)
			{
				if (s[i] == a[0] || checker > 0)
				{
					if (s[i] == a[0])
						checker++;
				}
				else
				{
					checker = 0;
				}
			}
		}
	}
	return (0);
}
