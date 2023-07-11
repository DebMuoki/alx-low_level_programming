#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars & initializes with a specific char
 * @size: the size of the array
 * @c: the specific char
 * Return: return value is pointer to the array; NULL upon failure
 **/

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int index;

	string = (char *)malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		string[index] = c;
	return (string);
}

