#include "main.h"

/**
 * binary_to_uint - convert number to binary
 * @b: number to convert
 * Return: binary convertion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bi = 0;
	int i;

	if (b[0] == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bi <<= 1;
		bi |= b[i] - '0';
	}
	return (bi);
}
