#include "main.h"

/**
 * rot13 - encode a string by using rot13
 * @txt: string to encode
 * Return: pointer to string @txt
 */

char *rot13(char *txt)
{
	int i = 0;

	while (txt[i])
	{
		while ((txt[i] >= 'A' && txt[i] <= 'Z') || (txt[i] >= 'a' && txt[i] <= 'z'))
		{
			if ((txt[i] >= 'A' && txt[i] <= 'M') || (txt[i] >= 'a' && txt[i] <= 'm'))
				txt[i] += 13;
			else
				txt[i] -= 13;
			i++;
		}
		i++;
	}
	return (txt);
}
