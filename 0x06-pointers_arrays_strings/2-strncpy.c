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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
