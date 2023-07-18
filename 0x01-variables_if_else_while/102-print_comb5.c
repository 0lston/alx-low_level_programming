#include<stdio.h>

/**
 * main - Prints all possible combinations of double-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int d_left, d_right;


	for (d_left = 0; d_left <= 98; d_left++)
	{
		for (d_right = d_left + 1; d_right <= 99; d_right++)
		{
			putchar(d_left / 10 + '0');
			putchar(d_left % 10 + '0');
			putchar(' ');
			putchar(d_right / 10 + '0');
			putchar(d_right % 10 + '0');

			if (d_left != 98 || d_right != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
