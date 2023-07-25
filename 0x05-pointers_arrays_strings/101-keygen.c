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
	char str[] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

	srand(time(NULL));

	while (sum < 2772)
	{
		r = str[rand() % 95];
		if ((sum + r) > 2772)
			break;
		sum = sum + r;
		printf("%c", r);
	}
	printf("%c", (2772 - sum));
		return (0);
}
