#include <stdlib.h>
#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
	if (!is_separator(str[i]) && (is_separator(str[i + 1]) || str[i + 1] == '\0'))
	count++;
	i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL
 *         or if memory allocation fails.
 */

char **strtow(char *str)
{
	char **words;
	int word_count = 0;
	int word_length = 0;
	int i, j, k;

	if (str == NULL || *str == '\0')
	return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
	if (!is_separator(str[i]))
	word_length++;
	if (!is_separator(str[i]) && (is_separator(str[i + 1]) || str[i + 1] == '\0'))
	{
	words[j] = malloc((word_length + 1) * sizeof(char));
	if (words[j] == NULL)
	{
	for (k = 0; k < j; k++)
	free(words[k]);
	free(words);
	return (NULL);
	}
	for (k = 0; k < word_length; k++)
	words[j][k] = str[i - word_length + 1 + k];
	words[j][k] = '\0';
	word_length = 0;
	j++;
	}
	i++;
	}
	words[j] = NULL;

	return (words);
}

