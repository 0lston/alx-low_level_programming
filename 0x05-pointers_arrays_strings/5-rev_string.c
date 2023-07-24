#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	while (*(s + len))
		len++;
	/*s[i] : the first character, s[len - i - 1] the last one */
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
