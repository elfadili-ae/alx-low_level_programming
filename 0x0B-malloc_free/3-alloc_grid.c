#include "main.h"
#include <string.h>

/**
 * alloc_grid - allocate a 2D array of int
 * @width: width
 * @height: height
 * Return: pointer to array | NULL (failed)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocating memory for rows*/
	arr = (int **) malloc(sizeof(int *) * height);
	/*allocating memory for columns*/
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			return (NULL);
		}
	}
	/*arr initalize with 0*/
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
