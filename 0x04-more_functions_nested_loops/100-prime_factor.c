#include <stdio.h>
/**
 * main - prints the highest prime factor of 612852475143
 *
 * Return: 0 if successful
 */

int main(void)
{
	long n = 612852475143;
	long factor = 2;

	while (factor < n)
	{
		while (n % factor == 0)
			n /= factor;
		if (factor == 2)
			factor++;
		else
			factor += 2;
	}
	printf("%ld\n", factor);
	return (0);
}
