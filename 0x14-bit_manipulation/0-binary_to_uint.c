#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to int
 * @b: number to convert
 * Return: int convertion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bi = 0;
	int i = 0, len;

	if (b == NULL || b[0] == '\0')
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (i < len)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			bi <<= 1;
			bi |= b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (bi);
}
