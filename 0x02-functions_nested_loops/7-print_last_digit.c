#include"main.h"

/**
 * print_last_digit - print last digit
 *
 * Description: print last digit of a number
 * @n: integer
 *
 * Return: last digit (int)
*/

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + 48);
	return (m);
}
