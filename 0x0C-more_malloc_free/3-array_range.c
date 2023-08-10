#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers in a specified range.
 * @min: The minimum value in the range.
 * @max: The maximum value in the range.
 *
 * Return: On success, returns a pointer to an array of integers.
 *         If @min is greater than @max or if memory allocation
 *         fails, returns NULL.
 *         The returned array contains values from @min to @max (inclusive).
 */

int *array_range(int min, int max)
{
	int size, i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (!arr)
		return (NULL);
	while (min <= max)
		arr[i++] = min++;

	return (arr);
}
