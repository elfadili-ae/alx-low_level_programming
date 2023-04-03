#include "main.h"

/**
 * _memcpy - copy memory
 * @src: memory area to copy
 * @dest: memory arae destination
 * @n: number of bytes to copy
 * Return: pointer to memory @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
