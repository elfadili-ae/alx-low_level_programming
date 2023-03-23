#include "main.h"

/**
 * print_number - print an int number
 *@d: number to print
 *
 */
void print_number(int d)
{
	unsigned int num = d;

	if (d < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
