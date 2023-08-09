#include "main.h"
#include <stdlib.h>

int _arglen(int ac, char **av);

/**
 * argstostr - Concatenates all the arguments into a single string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * This function concatenates all the argument strings into a single string,
 * where each argument is separated by a newline character '\n'. The resulting
 * string is dynamically allocated and needs to be freed after use to prevent
 * memory leaks.
 *
 * Return: A pointer to the concatenated string, or NULL if memory allocation
 * fails or if no arguments are provided.
 */

char *argstostr(int ac, char **av)
{
	char *concat_s;
	int i, j, k = 0;

	if (!ac || !av)
		return (NULL);

	concat_s = (char *)malloc(_arglen(ac, av) + 1);
	if (!concat_s)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concat_s[k++] = av[i][j];
		 concat_s[k++] = '\n';
	}
	concat_s[k] = '\0';

	return (concat_s);
}

/**
 * _arglen - Calculates the total length of concatenated arguments.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * This function calculates the total length of the concatenated arguments by
 * counting the characters in each argument and adding the number of newline
 * characters needed. This length is used to allocate memory for the
 * concatenated string.
 *
 * Return: The total length of the concatenated arguments.
 */

int _arglen(int ac, char **av)
{
	int len = 0,
	    i = 0,
	    j = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	return (len + ac);
}
