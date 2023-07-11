#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * _strdup - Duplicates a string to a new memory space
 * @str: This is the string to be duplicated
 * Return:Return value is 0
 */

char *_strdup(char *str)
{
	size_t length = 0;
	size_t index;
	char *dup;

	if (str == NULL)
		return (NULL);


	while (str[length] != '\0')
		length++;

	dup = (char *)malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (index = 0; index <= length; index++)
		dup[index] = str[index];

	return (dup);
}

