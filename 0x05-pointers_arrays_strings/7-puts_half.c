#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int len = 0, n;

	while (*(str + len))
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n =  (len + 1) / 2;
	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
