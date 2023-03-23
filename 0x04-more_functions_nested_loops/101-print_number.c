#include "main.h"

/**
 * print_number - print an int number
 *@num: number to print
 *
 */
void print_number(int num)
{
	long int length = 0;
	int isNegative = 0;
	int j;
	int i;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	j = num;
	while (j / 10)
	{
		j = j / 10;
		length++;
	}
	if (isNegative)
		_putchar('-');
	for (j = length; j > 0; j--)
	{
		int expo = 1;

		for (i = 0; i < j; ++i)
			expo *= 10;
		_putchar((num / expo) % 10 + '0');
	}
	_putchar(num % 10 + '0');
}
