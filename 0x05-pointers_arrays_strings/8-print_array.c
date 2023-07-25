#include "stdio.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			printf("%d", *(a + i));
			if (i == n - 1)
				break;
			printf(", ");
			i++;
		}
	}
	printf("\n");
}
