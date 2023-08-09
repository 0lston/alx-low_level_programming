#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * This function allocates memory for a 2D array of integers with the specified
 * width and height. Each element of the array is initialized to 0.
 * allocated memory can be accessed and modified using the returned pointer.
 *
 * Return: If width or height is 0 or negative, or if memory allocation fails,
 *         the function returns NULL. Otherwise, it returns a pointer to the
 *         allocated 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	}

	return (grid);
}
