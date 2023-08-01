#include "main.h"
#include <stdio.h>

/* prototypes */
void print_ascii(char *, int, int);

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int i = 0,
	    c = 0;

	if (!size)
		printf("\n");
	while (i < size)
	{
		c = 0;
		printf("%.8x: ", i);
		while (c < 10)
		{
			if (i >= size)
				printf("  ");
			else
				printf("%.2x", *(b + i));
			if (i % 2 && i)
				printf(" ");
			c++;
			i++;
		}
		print_ascii(b, i - c, i);
	}
}

/**
 * print_ascii - Prints a 10 charcaters from buffer.
 *
 * @b: The buffer to be printed.
 * @i: position to print to.
 * @j: position to start from.
 */
void print_ascii(char *b, int j, int i)
{
	for (; j < i; j++)
	{
		if (*(b + j) >= 32 &&
				*(b + j) <= 126)
			printf("%c", *(b + j));
		else
			printf(".");
	}
	printf("\n");
}
