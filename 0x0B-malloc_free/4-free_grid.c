#include <stdlib.h>

/**
 * free_grid - frees the 2D array from the previous task
 * @grid: the array to be freed
 * @height: the number of rows (the height of the array)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
