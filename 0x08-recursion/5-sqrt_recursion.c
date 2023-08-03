#include "main.h"

/*prototyypes */
int find_sqrt(int a, int b);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else
		return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @a: The number to find the square root of.
 * @b: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b > a / 2)
		return (-1);
	return (find_sqrt(a, b + 1));
}
