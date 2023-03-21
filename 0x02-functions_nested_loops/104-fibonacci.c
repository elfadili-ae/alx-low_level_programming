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
	long int x = 1;
	long int y = 2;
	long int z;

	printf("1, 2, ");
	for (m = 3; m < 99; m++)
	{
		z = x + y;
		printf("%lu", z);
		x = y;
		y = z;
		if (m != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
