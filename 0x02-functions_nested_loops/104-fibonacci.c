#include <stdio.h>

/**
 * main - print first Fib 50 fibb numbers below 50
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int m;
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long z;
	unsigned long  xc = 0, yc = 0, zc = 0;
	unsigned long max = 100000000;

	for (m = 1; m < 99; m++)
	{
		if (xc > 0)
			printf("%lu", xc);
		printf("%lu", x);
		z = (x + y) % max;
		zc = xc + yc + (x + y) / max;
		x = y;
		xc = yc;
		y = z;
		yc = zc;
		if (m != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
