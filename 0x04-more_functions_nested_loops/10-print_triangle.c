#include "main.h"

/**
 * print_triangle - print a triangle with #
 *@c: number of rows
 *
 */
void print_triangle(int c)
{
	int i;
	int j;

	for (i = 1; i <= c; i++)
	{
		for (j = i; j < c; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
