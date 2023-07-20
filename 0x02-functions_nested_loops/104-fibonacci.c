#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fib = 0, a = 0, b = 1;

	for (i = 0; i < 98; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		if (i < 97)
			printf("%lu, ", fib);
		else
			printf("%lu\n", fib);
	}
	return (0);
}
