#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (!arr)
		return (NULL);
	for (i = 0; min <= max; min++)
		arr[i++] = min;

	return (arr);
}
