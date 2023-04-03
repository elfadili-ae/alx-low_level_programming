#include "main.h"

/**
 * print_diagsums - print the sum of diagonals
 * @a: array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[size * i  + i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[size * i + (size - 1 - i)];
	}
	printf("%ld, %ld\n", sum1, sum2);
}
