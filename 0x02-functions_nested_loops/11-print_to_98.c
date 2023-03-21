#include"main.h"

/**
 * print_to_98 - print number to 98
 *
 * @n: starting int
 *
*/

void print_to_98(int n)
{
	int m;

	if (n <= 98)
		for (; n <= 98; n++)
		{
			m = n;
			if (m < 0)
			{
				m = m * -1;
				_putchar('-');
			}
			if ((m / 100) != 0)
				_putchar((m / 100) % 10 + '0');
			if ((m / 10) != 0)
				_putchar((m / 10) % 10 + '0');
			_putchar((m % 10) + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if ((n / 100) != 0)
				_putchar((n / 100) + 48);
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
