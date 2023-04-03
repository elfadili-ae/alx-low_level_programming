#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: memory area
 * @n: constant byte
 * @b: number of bytes
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		s[i] = b;
	return (s);
}
