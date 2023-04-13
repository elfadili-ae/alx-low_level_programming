#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: prev pointer
 * @old_size: prev size
 * @new_size: new size
 * Return: new pointer | NULL (failed)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *cp = ptr;
	unsigned int i, min;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	min = old_size < new_size ? old_size : new_size;

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size != old_size)
	{
		for (i = 0; i <= min; i++)
			p[i] = cp[i];
		free(ptr);
	}

	return (p);
}
