#include "main.h"

/**
 * print_diagonal - print a diagonal with back-slash
 * @c: diagonal length
 */
void print_diagonal(int c)
{
	int i;
	int j;

	for (j = 0; j < c; j++)
	{
		for (i = 0; i <= j; i++)
		{
			_putchar(i / 10 + ' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
