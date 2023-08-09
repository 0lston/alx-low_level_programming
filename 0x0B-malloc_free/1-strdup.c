#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: NULL - If str == NULL or insufficient memory is available.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (!str)
		return (NULL);
	while (str[i])
		i++;

	dup = (char *)malloc(i + 1);

	if (!dup)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
