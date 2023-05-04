#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - print binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	/*unsigned long int num = 0;*/
	int i, digit;

	digit = digitCount(n);
	if (digit <= 1)
	{
		_putchar((n & 1) + '0');
	}
	else
	{
		for (i = digit - 1; i >= 0; i--)
		{
			_putchar(((n >> i) & 1) + '0');
		}
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
