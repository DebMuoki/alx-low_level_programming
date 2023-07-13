#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function that allocates memory for an array using malloc.
 * @nmemb: This is the number of elements in the array.
 * @size: This is the size of each element in bytes.
 * Return: Returns pointer to the allocated memory else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);

	for (index = 0; index < (size * nmemb); index++)
		*((char *)pointer + index) = 0;

	return (pointer);
}

