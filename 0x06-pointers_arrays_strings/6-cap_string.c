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
		for (j = 0; j < 13; j++)
			if (str[i] == sep[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
