#include "main.h"

/**
 * print_times_table -   prints the n times table, starting with 0.
 * Return: void
 *@n: n times table
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j > 9)
			{
				if (i * j < 99)
					_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + '0');
			}


		}
		_putchar('\n');
	}
}
