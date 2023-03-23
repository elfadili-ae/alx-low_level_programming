#include "main.h"

/**
 * more_numbers - print from 0 to 14 x10
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 100; j++)
	{
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
