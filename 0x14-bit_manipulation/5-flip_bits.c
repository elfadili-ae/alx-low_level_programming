#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * flip_bits - count number of digits needed to be flipped
 * to get another anumber
 * @n: number
 * @m: number target
 *Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exOR, count = 0;

	exOR = n ^ m;

	while (exOR != 0)
	{
		count += exOR & 1;
		exOR >>= 1;
	}

	return (count);
}
