#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print combinations of two two- digits
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (j != i)
			{
				putchar((i / 10) % 10 + '0');
				putchar(i % 10 + 48);
				putchar(' ');
				putchar((j / 10) % 10 + '0');
				putchar(j % 10 + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
