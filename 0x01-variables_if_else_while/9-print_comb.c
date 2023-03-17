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
	int Sdigit[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	int j = 0;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			int tmp = Sdigit[j];

			Sdigit[j] = Sdigit[j + 1];
			Sdigit[j + 1] = tmp;
			for (k = 0; k < 10; k++)
			{
				putchar(Sdigit[k] + '0');
				if (k < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	return (0);
}
