#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 * Return: 1 if c is lower case, 0 otherwise
 * @c: character to be verified
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
