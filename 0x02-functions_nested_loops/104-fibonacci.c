#include <stdio.h>

/**
 *lencount - count the number's length
 *
 *@d: operand to count its length
 *
 *Return: return the length
 */
int lencount(int d)
{
	int len = 0;

	if (d == 0)
		return (1);
	for (; d != 0;)
	{
		d = d / 10;
		len++;
	}
	return (len);
}

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
	unsigned long filler;
	unsigned long max = 100000000;

	for (m = 1; m < 99; m++)
	{
		if (xc > 0)
			printf("%lu", xc);
		filler = lencount(max) - lencount(x) - 1;
		while (xc > 0 && filler > 0)
		{
			printf("%d", 0);
			filler--;
		}
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
