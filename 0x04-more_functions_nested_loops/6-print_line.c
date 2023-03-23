#include "main.h"

/**
 * print_line - print a line
 * @c: length of the line
 *
 */
void print_line(int c)
{
	int i;

	for (i = 0; i < c; i++)
		_putchar('_');
	_putchar('\n');
}
