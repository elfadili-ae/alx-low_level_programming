#include "main.h"

/**
 * print_buffer - print the buffer of a string
 * @b: string to print
 * @size: buffer size
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0, k;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i += 10)
	{
		for (j = 0, k = 0; j < 10; j++)
		{
			if (j == 0)
				printf("%08x: ", i);
			if ((i + j) >= size)
				printf("  ");
			else
				printf("%02x", b[i + j]);

			if (k < 1)
				k++;
			else
			{
				k = 0;
				putchar(' ');
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (b[i + j] >= 31 && b[i + j] <= 126)
				putchar(b[i + j]);
			else if ((i + j) < size)
				putchar('.');
		}
		putchar('\n');
	}
}
