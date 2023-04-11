#include "main.h"

/**
 * create_array - create an array and init with a
 * specific char.
 * @size: size of the array
 * @c: char to init with
 * Return: pointer to array | NULL (failed)
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr = malloc(size);

	if (arr == NULL || size <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < (int) size; i++)
		arr[i] = c;
	return (arr);
}
