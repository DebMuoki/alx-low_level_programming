#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * create_array - creates an array of type char
  * @size: this is the size of the array
  * @c: character that initializes the array
  * Return: pointer to allocated memory or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
