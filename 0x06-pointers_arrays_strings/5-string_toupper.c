#include "main.h"

/**
 * string_toupper - transforms all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
