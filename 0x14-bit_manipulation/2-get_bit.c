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
	int digit;

	digit = digitCount(n);
	if ((unsigned int) digit < i)
	{
		return (-1);
	}
	else
	{
		return ((n >> i) & 1);
	}
}

/**
 * digitCount - count the number of digits
 * @n: number
 * Return: number of digits
 */
int digitCount(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		n >>= 1;
		count++;
	}
	return (count);
}
