#include "main.h"

/**
 * print_square - print a square of #
 * @c: square size
 */
void print_square(int c)
{
	int i;
	int j;

	for (j = 0; j < c; j++)
	{
		for (i = 0; i < c; i++)
		{
			_putchar('#');
			if (i == (c - 1))
				_putchar('\n');
		}
	}
	if (c <= 0)
		_putchar('\n');
}
