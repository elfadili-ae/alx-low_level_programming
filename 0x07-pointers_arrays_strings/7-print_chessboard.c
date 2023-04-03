#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: board elements
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0 || i == 7)
				_putchar(a[i][j]);
			if (i == 1 || i == 6)
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
