#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int hash, count;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (count = size - hash; count > 0; count--)
				_putchar(' ');
			for (count = 0; count < hash; count++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');

}
