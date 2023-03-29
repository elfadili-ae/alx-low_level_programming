#include "main.h"

/**
 * cap_string - Cap a string
 * @str: string to cap
 * Return: pointer to string @str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sep[] = " ,\t\n;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == '\t')
				str[i - 1] = ' ';
			for (j = 0; j < 13; j++)
				if (str[i - 1] == sep[j])
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}
