#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * get_bit - get bit at index
 * @n: number to convert
 * @i: index of the bit
 *Return: bit at index or -1 (otherwise)
 */
int get_bit(unsigned long int n, unsigned int i)
{

	if (i > sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	return ((n >> i) & 1);
}
