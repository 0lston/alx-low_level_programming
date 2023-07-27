#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char *letters = "AaEeOoTtLl";
	char *leet = "4433007711";
	int i = 0,
	    j = 0;

	while (str[i])
	{
		for (j = 0; letters[j]; j++)
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
				break;
			}
		i++;
	}

	return (str);
}
