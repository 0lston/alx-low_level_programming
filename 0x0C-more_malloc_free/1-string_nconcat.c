#include "main.h"
#include <stdlib.h>

/*prototypes*/
unsigned int _strlen(char *);

/**
 * string_nconcat - Concatenates two strings up to the first n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to a newly allocated space in memory containing the
 * concatenated strings, or NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *concat_s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);
	concat_s = (char *)malloc(_strlen(s1) + n + 1);

	if (!concat_s)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_s[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		concat_s[i] = s2[j];
	concat_s[i] = '\0';
	return (concat_s);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}
