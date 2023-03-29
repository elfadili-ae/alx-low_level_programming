#include "main.h"

/**
 * _strncpy - Concatenate n bytes of src string
 * @dest: destinatin string
 * @src: source string
 * @n: number of characters to copy
 * Return: pointer to string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
		len++;

	while (i < n)
	{
		if (i <= len)
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
