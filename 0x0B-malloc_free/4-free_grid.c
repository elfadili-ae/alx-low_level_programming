#include "main.h"
#include <string.h>

/**
 * free_grid - free allocated grid
 * @grid: grid to free
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
