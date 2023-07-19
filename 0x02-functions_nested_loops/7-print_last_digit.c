#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * Return:  the value of the last digit
 * @i: parameter targeted
 */

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
		last *= -1;
	_putchar('0' + last);
	return (last);
}
