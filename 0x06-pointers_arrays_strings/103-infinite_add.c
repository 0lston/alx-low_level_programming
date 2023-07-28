#include "main.h"


/*function prototype*/
int last_char(char *str);

/**
 * infinite_add - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @size_r: size of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = last_char(n1),
	    j = last_char(n2),
	    k = size_r - 1,
	    sum = 0;

	r[k--] = '\0';

	while (i >= 0 || j >= 0 || sum)
	{
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if (k >= 0)
			r[k--] = sum % 10 + '0';
		else
			return (0);
		sum /= 10;
	}

/*
 * Move the result to the beginning of
 * the buffer if there's any leading zeros.
 */
	if (k++)
		for (i = 0; r[k]; k++, i++)
			r[i] = r[k];

	return (r);

}

/**
 * last_char - gives the position of the last char in a string
 *		excludeing '\0'
 * @str: pointer to the string.
 * Return: the position of the last character.
 */
int last_char(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i - 1);
}


