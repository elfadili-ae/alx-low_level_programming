#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string to encode
 * Return: pointer to string @str
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char target[2][5] = {"aeotl", "AEOTL"};
	char code[] = "43071";

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
			if (str[i] == target[0][j] || str[i] == target[1][j])
				str[i] = code[j];
		i++;
	}
	return (str);
}
