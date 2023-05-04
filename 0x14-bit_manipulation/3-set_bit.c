#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * set_bit - set bit at index
 * @n: number to convert
 * @i: index of the bit
 *Return: bit at index or -1 (otherwise)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setter = 1;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	setter = 1 << index;
	*n |= setter;

	return (1);
}
