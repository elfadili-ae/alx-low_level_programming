#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate memory for an int array
 * @min: min value
 * @max: max value
 * Return: pointer to array | NULL (failed)
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
