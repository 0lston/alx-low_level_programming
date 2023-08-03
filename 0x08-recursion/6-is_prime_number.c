#include "main.h"

int is_prime(int, int);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else
		return (is_prime(n, 2));
}

/**
 * is_prime - checks if a number is a prime
 * @n: number to check
 * @div: The divisor.
 * Return: 1 if the input integer is a prime, otherwise 0
*/

int is_prime(int n, int div)
{
	if (div > n / 2)
		return (1);
	else if (n % div == 0)
		return (0);
	else
		return (is_prime(n, div + 1));
}
