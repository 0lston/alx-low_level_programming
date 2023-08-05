#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 *	     in the string haystack.
 *
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is found - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not found - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0,
	    j = 0;

	if (!*needle)
		return (haystack);

	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && needle[j] == haystack[i + j])
		{
			if (!needle[j + 1])
				return (haystack + i);
			j++;
		}
		i = i + j + 1;
	}
	return (NULL);
}
