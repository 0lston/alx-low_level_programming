#include <stdio.h>
#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ');
}

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (is_space(str[i]))
		{
			if (in_word)
			{
				count++;
				in_word = 0;
			}
		}
		else
		{
			in_word = 1;
		}
	}

	if (in_word)
	{
		count++;
	}

	return (count);
}

int word_length(char *str)
{
	int length = 0;

	while (!is_space(str[length]) && str[length] != '\0')
		length++;
	return (length);
}

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int word_index = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (is_space(str[i]))
			i++;
		if (str[i] == '\0')
		{
			break;
		}
		int len = word_length(&str[i]);

		words[word_index] = (char *)malloc((len + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (int j = 0; j < word_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (int j = 0; j < len; j++)
			words[word_index][j] = str[i + j];
		words[word_index][len] = '\0';
		word_index++;
		i += len;
	}

	words[word_index] = NULL;
	return (words);

}
