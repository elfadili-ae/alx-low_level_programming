#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

void print_range(int *array, size_t lo, size_t hi);

/**
 * jump_search - jump search algorithm
 * @array: sorted array
 * @size: size of the array
 * @value: element to search
 * Return: index of the first match | -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, low = 0, step;

	step = (size_t)sqrt(size);
	for (i = 0; i < size; i += step)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value < array[i + step])
			break;
		low = i;
	}
	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", low, low + step);
	j = low;
	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}

/**
 * print_range - print array
 * @array: arary to print
 * @lo: starting index
 * @hi: end index
 */
void print_range(int *array, size_t lo, size_t hi)
{
	size_t i;

	if (lo > hi)
		return;

	printf("Searching in array: %d", array[lo]);
	for (i = lo + 1; i < hi; i++)
		printf(", %d", array[i]);

	printf("\n");
}
