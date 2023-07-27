#include "main.h"

/*function protoype */
int is_separator(char c);

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		   (i == 0 || is_separator(str[i - 1])))
			str[i] -= 32;
		i++;
	}

	return (str);
}

/**
 * is_separator - checks if a character is a word separaor.
 * @c: The character to be capitalized.
 *
 * Return: 1 if c is a word separator, 0 if not.
 */

int is_separator(char c)
{
	char *sep = " \t\n,;.!?\"(){}";

	while (*sep)
		if (c == *sep++)
			return (1);
	return (0);
}
