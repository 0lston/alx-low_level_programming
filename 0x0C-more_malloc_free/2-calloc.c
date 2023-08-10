#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: On success, returns a pointer to the newly allocated memory.
 *         If @nmemb or @size is 0, or if malloc fails, returns NULL.
 *         The memory is initialized to zero.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);

}
