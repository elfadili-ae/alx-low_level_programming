#include "main.h"

/**
 * _strncat - Concatenate n bytes of src string
 * @dest: destinatin string
 * @src: source string
 * @n: number of characters to concatenate
 * Return: pointer to string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n || src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	/*dest[len + i] = '\0';*/
	return (dest);
}
