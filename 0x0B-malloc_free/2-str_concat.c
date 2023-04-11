#include "main.h"
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: the first string to be concatenated
  * @s2: the second string to be concatenated
  * Return: pointer to concatenated string or NULL if the allocation fails
  */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1])
	len1++;

	while (s2[len2])
	len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	result[i] = s1[i];

	for (j = 0; j < len2; j++)
	result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}


