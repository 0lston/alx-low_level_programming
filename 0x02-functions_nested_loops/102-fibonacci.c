#include <stdio.h>

/**
 * min - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i; 
	unsigned long fib = 0, a = 0, b = 1;

	for (i = 0; i < 49; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%ld, ", fib);
	}
	printf("%ld\n", fib);
	return (0);
}
