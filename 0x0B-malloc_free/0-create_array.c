#include "main.h"

/**
 * create_array - Creates an array of chars and
 *                initializes it with a given character.
 * @size: The size of the array to be created.
 * @c: The specific char to intialize the array with.
 *
 * Return: NULL - If size == 0 or the function fails.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	array = malloc(size);

	if (!array || !size)
		return (NULL);

	for (i = 0; i < size; i++)
		array[0] = c;

	return (array);
}
