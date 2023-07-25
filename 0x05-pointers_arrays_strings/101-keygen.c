#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum = 0,
	    r = 0;

	srand(time(NULL));

	while (1)
	{
		r = rand() % 127;
		if ((sum + r) > 2772)
			break;
		if (r)
		{
			sum = sum + r;
			printf("%c", r);
		}
	}
	printf("%c", (2772 - sum));

	return (0);
}
