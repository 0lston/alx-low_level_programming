#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int letter;

	for (int i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar (letter);
		_putchar (10);


	}

}
