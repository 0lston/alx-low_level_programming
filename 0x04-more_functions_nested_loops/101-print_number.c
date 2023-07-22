#include "main.h"

/**
 * print_number - prints an arbitrary integer using putchar
 *
 * @n: integer to print
 *
 * Return: void
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
