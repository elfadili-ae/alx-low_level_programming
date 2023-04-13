#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate memory for an int array
 * @nmemb: number of elements
 * @size: size
 * Return: pointer to array | NULL (failed)
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size = max - min + 1;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i] = i;
	return (p);
}
