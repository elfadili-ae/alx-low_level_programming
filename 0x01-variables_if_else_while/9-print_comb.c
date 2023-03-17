#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print combinations of single-digit numbers
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while ( i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
