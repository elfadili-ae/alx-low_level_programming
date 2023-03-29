#include "main.h"

/**
 * rot13 - encode a string by using rot13
 * @s: string to encode
 * Return: pointer to string @s
 */

char *rot13(char *s)
{
	int i = 0, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABDCEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOQPRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
			if (s[i] == a[j])
			{
				s[i] = r[j];
				break;
			}
		i++;
	}
	return (s);
}
