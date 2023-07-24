#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	while (n--)
	{
		_putchar(*(s + n));
		_putchar('\n');
	}
}
