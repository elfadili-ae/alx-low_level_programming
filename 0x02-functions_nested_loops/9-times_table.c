#include"main.h"

/**
 * times_table - print 9x table
 *
 * Description: print the 9 times table
 *
 * Return: last digit (int)
*/

void times_table(void)
{
	int m;
	int n;
	int res;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			res = m * n;
			if (n != 0)
				if ((res / 10) == 0)
					_putchar(' ');
			if ((res / 10) != 0)
				_putchar((res / 10) + 48);
			_putchar((res % 10) + 48);
			if (n != 9)
			{

				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
