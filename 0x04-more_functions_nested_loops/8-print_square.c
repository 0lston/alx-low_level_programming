#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 */

void print_square(int size)
{
	int row, col = size;

	if (size <= 0)
		_putchar('\n');
	while (col--)
	{
		row = size;
		while (row--)
			_putchar('#');
		_putchar('\n');
	}
}
