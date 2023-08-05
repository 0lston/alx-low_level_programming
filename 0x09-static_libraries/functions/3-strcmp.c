#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: a value indicating the relationship between the two strings:
 *		Less than 0	: string1 less than string2.
 *		0		: string1 identical to string2.
 *		Greater than 0	: string1 greater than string2.
 *
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s2[i] && s1[i])
		i++;

	return (s1[i] - s2[i]);
}

