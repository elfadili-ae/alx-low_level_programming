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
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	for (m = 2; m < 50; m++)
		fib[m] = fib[m - 1] + fib[m - 2];

	for (m = 0; m < 50; m++)
	{
		printf("%ld", fib[m]);
		if (m != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
