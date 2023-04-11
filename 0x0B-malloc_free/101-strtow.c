#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 *         NULL if str is NULL or contains no words
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, start, num_words;

	num_words = count_words(str);
	if (num_words == 0)
	return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (!words)
	return (NULL);

	i = 0;
	j = 0;
	len = strlen(str);
	start = 0;

	while (i < len)
	{
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
	i++;

	start = i;
	while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
	i++;

	if (i > start)
	{
	words[j] = malloc((i - start + 1) * sizeof(char));
	if (!words[j])
	{
	while (j >= 0)
	free(words[j--]);
	free(words);
	return (NULL);
	}
	strncpy(words[j], &str[start], i - start);
	words[j++][i - start] = '\0';
	}
	}

	words[j] = NULL;

	return (words);
}
