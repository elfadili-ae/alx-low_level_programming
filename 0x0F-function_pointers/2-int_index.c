#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array
 * @size: array size
 * @cmp: compare function
 * Return: index when match | -1 (failed)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
