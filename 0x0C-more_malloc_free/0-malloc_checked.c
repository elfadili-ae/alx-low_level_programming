#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate space in memory
 * @b: size of memory
 * Return: pointer to allocated space | 98 (failed)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
