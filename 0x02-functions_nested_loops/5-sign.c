#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 * Return: 1 if n is greater than zero,
 *	   0 if n is zero, -1 if n is less than zero.
 * @n: number to be verified
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
