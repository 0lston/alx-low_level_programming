#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	if (num > 9)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else
		_putchar(num + '0');
}
