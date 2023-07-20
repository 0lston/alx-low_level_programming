#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms
 *	   of the Fibonacci sequence whose values do not exceed 4,000,000
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fib = 0, a = 0, b = 1, sum = 0;

	while (fib <= 4000000)
	{
		fib = a + b;
		a = b;
		b = fib;
		if (fib % 2 == 0)
			sum += fib;
	}
	printf("%ld\n", sum);
	return (0);
}
