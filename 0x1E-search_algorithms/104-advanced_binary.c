#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

void print_array(int *array, size_t lo, size_t hi);

/**
 * binary_recursion - binary search recursion
 * @array: sorted array
 * @value: value to search
 * @lo: low bound
 * @hi: high bound
 * Return: index of the first match
 */
int binary_recursion(int *array, int value, size_t lo, size_t hi)
{
	int mid;

	while (lo < hi)
	{
		print_array(array, lo, hi);
		mid = (lo + hi - 1) / 2;
		if (array[mid] == value)
		{
			if ((mid - 1 >= 0) && (array[mid - 1] == value))
				return (binary_recursion(array, value, lo, mid));
			return (mid);
		}
		if (array[mid] > value)
			hi = mid;
		else
			lo = mid + 1;
	}
	return (-1);
}

/**
 * advanced_binary - advanced binary search algorithm
 * @array: sorted array
 * @size: size of the array
 * @value: element to search
 * Return: index of the first match | -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binary_recursion(array, value, 0, size));
}

/**
 * print_array - print array
 * @array: arary to print
 * @lo: starting index
 * @hi: end index
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t i;

	if (lo > hi)
		return;

	printf("Searching in array: %d", array[lo]);
	for (i = lo + 1; i < hi; i++)
		printf(", %d", array[i]);

	printf("\n");
}
