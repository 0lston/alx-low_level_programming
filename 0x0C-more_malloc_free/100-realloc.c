#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block to be reallocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly reallocated memory block, or NULL on failure.
 *         If new_size > old_size, the "added" memory is not initialized.
 *         If new_size == old_size, the function does nothing and returns ptr.
 *         If ptr is NULL, the call is equivalent to malloc(new_size).
 *         If new_size is zero and ptr is not NULL, the call is equivalent
 *         to free(ptr).
 *         The original memory block (ptr) is freed.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);

	return (new_ptr);
}
