#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 below 1024
 *
 * Return: 0 (success)
 *
*/

int main(void)
{
	int m;
	int sum = 0;

	for (m = 0; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
			sum = sum + m;
	}
	printf("%d\n", sum);
	return (0);
}
