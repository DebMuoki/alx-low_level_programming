#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * strtow - function that Splits a string into words.
 * @str: The string to  be split.
 * Return: returns pointer to array of strings containing the words else NULL
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
	return (NULL);

	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	for (i = 0, word_count = 0; i < len; i++)
		{
	if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
	{
	for (j = i; j < len && !isspace(str[j]); j++)
		;
	words[word_count] = malloc((j - i + 1) * sizeof(char));
	if (words[word_count] == NULL)
	{
	while (--word_count >= 0)
	free(words[word_count]);
	free(words);
	return (NULL);
	}
				for (k = 0; k < j - i; k++)
					words[word_count][k] = str[i + k];
				words[word_count][k] = '\0';
				word_count++;
				i = j;
			}
		}
		words[word_count] = NULL;
		return (words);
}

