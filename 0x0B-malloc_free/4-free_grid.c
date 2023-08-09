#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height of the 2D array.
 *
 * This function deallocates memory allocated for a 2D array using the
 * `alloc_grid` function. It takes the pointer to the 2D array and its
 * height as input. It frees memory for each row and the array of pointers
 * itself. After calling this function, the memory allocated for the
 * 2D array is released and can no longer be accessed.
 *
 * Note: The function assumes that the input `grid` was allocated using the
 *        `alloc_grid` function.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
