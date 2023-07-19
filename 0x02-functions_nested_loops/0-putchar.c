#include "main.h"
/**
 * main - prints _putchar
 * Return: always 0
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
	return (0);
}

