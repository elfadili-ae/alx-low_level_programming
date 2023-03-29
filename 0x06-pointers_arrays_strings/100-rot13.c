#include "main.h"

/**
 * rot13 - encode a string by using rot13
 * @str: string to encode
 * Return: pointer to string @str
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i] + 13) > 122)
				str[i] = 'a' + (str[i] + 13) - 123;
			else
				str[i] += 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i] + 13) > 90)
				str[i] = 'A' + (str[i] + 13) - 91;
			else
				str[i] += 13;
		}
		i++;
	}
	return (str);
}
