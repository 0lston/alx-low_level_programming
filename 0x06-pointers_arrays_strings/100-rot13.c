#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
*/

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
	}

	return (str);
}
