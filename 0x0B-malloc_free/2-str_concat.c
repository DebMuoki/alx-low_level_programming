#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1;
	size_t length2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	concat = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}

