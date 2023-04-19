#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute an action on an array
 * @array: array
 * @size: array size
 * @action: function to apply on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
