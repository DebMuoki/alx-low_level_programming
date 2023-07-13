#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that Concatenates two strings.
 * @s1: This is the first string.
 * @s2: This is the  second string.
 * @n: This is the number of bytes of s2 to concatenate.
 * Return: pointer to the newly allocated concatenated string else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, concat_length, index, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat_length = len1 + n;

	concat = malloc((concat_length + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		concat[index] = s1[index];

	for (k = 0; k < n; k++)
		concat[index + k] = s2[k];

	concat[index + k] = '\0';

	return (concat);
}

