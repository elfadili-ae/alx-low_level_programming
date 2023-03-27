#include "main.h"
/**
 * print_array - print n elements of an array
 *@a: pointer to an int array
 *@n: size of n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
