#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 *		any of the bytes in the string accept.
 *
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched: a pointer to the matched byte.
 *         If no set is matched: NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0,
	    j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

