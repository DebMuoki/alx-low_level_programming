#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	int length;
	int word_count;
	int i;
	char **words;
	int word_index = 0;
	int start_index = 0;
	int word_length = 0;
	int j;


	if (str == NULL || *str == '\0')
	return (NULL);

	length = strlen(str);
	word_count = 0;


	for (i = 0; i < length; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	word_count++;
	}


	words = (char **) malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	start_index = i;

	if ((str[i] == ' ' || str[i] == '\0') && (i > 0 && str[i - 1] != ' '))
	{
	word_length = i - start_index;
	words[word_index] = malloc((word_length + 1) * sizeof(char));
	if (words[word_index] == NULL)
	{

	for (j = 0; j < word_index; j++)
	free(words[j]);
	free(words);
	return (NULL);
	}

	strncpy(words[word_index], str + start_index, word_length);
	words[word_index][word_length] = '\0';
	word_index++;
	}
	}

	words[word_count] = NULL;

	return (words);
}

