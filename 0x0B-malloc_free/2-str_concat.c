#include "main.h"
#include <stdlib.h>

/*prototypes*/
int _strlen(char *str);

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory containing the
 * concatenated strings, or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat_s;

	if (!s1 || !s2)
		return (NULL);
	concat_s = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (!concat_s)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_s[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
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

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
