#include "main.h"

/*function prototype*/
int helper(char *, char *);
int _strlen(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	return (helper(s,  s + len - 1));
}

/**
 * helper - Checks if a string is a palindrome.
 * @start: pointer to The begining of the string.
 * @end: pointer to the end of the string.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int helper(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	else
		return (helper(start + 1, end - 1));

}
/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s)
		return (_strlen(s + 1) + 1);
	else
		return (len);
}
