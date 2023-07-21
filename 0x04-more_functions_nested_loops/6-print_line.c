#include "main.h"


/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{

	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
