#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * clear_bit - clear bit at index
 * @n: number
 * @index: index of the bit
 *Return: 1(success) -1 (otherwise)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setter = 1;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	setter = ~ (setter << index);

	*n &= setter;

	return (1);
}
