#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: array size of the rows
 * @height: array size of the column
 *
 * Return: return the pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)(malloc(sizeof(int *) * height));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)(malloc(sizeof(int) * width));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
