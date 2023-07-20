#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fib = 0, a = 0, b = 1, al, ar, bl, br, fib_l, fib_r;

	for (i = 0; i < 92; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%lu, ", fib);
	}
	/* since unsigned long cant hold any larger numbers, we need to split it*/
	al = a / 10000000000;
	ar = a % 10000000000;
	bl = b / 10000000000;
	br = b % 10000000000;
	for (i = 92; i < 98; i++)
	{
		fib_r = ar + br;
		fib_l = al + bl;
		if (fib_r > 9999999999)
		{
			fib_r %= 10000000000;
			fib_l += 1;
		}
		al = bl;
		ar = br;
		bl = fib_l;
		br = fib_r;
		if (i < 97)
			printf("%lu%lu, ", fib_l, fib_r);
		else
			printf("%lu%lu\n", fib_l, fib_r);
	}

	return (0);
}
