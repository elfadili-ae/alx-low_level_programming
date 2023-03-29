#include "main.h"

/**
 * reverse_array - reverse the elements of an array
 * @arr: int array
 * @n: array size
 */

void reverse_array(int *arr, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = arr[n - i - 1];
		arr[n - i - 1] = arr[i];
		arr[i] = tmp;
	}
}
