#include "main.h"

/**
 * _memcpy -  copies  n  bytes from memory area src to memory area dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: number of bytes to copy
 * Return: A pointer to the destination buffer @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}

