#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */

void print_diagonal(int n)
{
	int s = 0, tmp;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		tmp = s;
		while (tmp--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		n--;
		s++;
	}
}
