#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);


/**
 * strtow - Splits a string into an array of words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 *         Each element of the array contains a single word, null-terminated.
 *         The last element of the array is NULL.
 */

char **strtow(char *str)
{
	char **words;
	int len;
	int i = 0, j;
	int w_index = 0;

	if (!str || !*str)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * count_words(str));
	if (!words)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!str[i])
			break;
		len = word_len(&str[i]);
		words[w_index] = (char *)malloc(sizeof(char) * (len + 1));
		if (!words[w_index])
		{
			for (j = 0; j < w_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[w_index][j] = str[i + j];
		words[w_index][len] = '\0';

		w_index++;
		i += len;
	}
	words[w_index] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string containing the words.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] == ' ' && str[i + 1] != ' ') || !str[i + 1])
			count++;
	}
	return (count);
}

/**
 * word_len - Calculates the length of a word in a string.
 * @str: The string containing the word.
 *
 * Return: The length of the word.
 */

int word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len])
		len++;
	return (len);
}
