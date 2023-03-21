#include"main.h"

/**
 * print_times_table - print n times table
 *
 * @t: t times
 *
*/

void print_times_table(int t)
{
	int m;
	int n;
	int res;

	if (t > 0 && t < 15)
		for (m = 0; m < (t + 1); m++)
		{
			for (n = 0; n < (t + 1); n++)
			{
				res = m * n;
				if (n != 0)
					if ((res / 100) == 0)
						_putchar(' ');
				if (n != 0)
					if ((res / 10) == 0)
						_putchar(' ');
				if ((res / 100) != 0)
					_putchar ((res / 100) + 48);
				if ((res / 10) != 0)
					_putchar((res / 10) % 10 + 48);
				_putchar((res % 10) + 48);
				if (n != t)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
