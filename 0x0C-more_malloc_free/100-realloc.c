#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that Reallocates a memory block using malloc and free.
 * @ptr: This is a Pointer to the previously allocated memory.
 * @old_size: This is the Size of the allocated space for ptr.
 * @new_size: This is the new size of the memory block.
 * Return: Returns Pointer to the reallocated memory block else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;
	unsigned int iNDEX;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_block = malloc(new_size);
		if (new_block == NULL)
			return (NULL);
		return (new_block);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_block = malloc(new_size);
	if (new_block == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (index = 0; index < new_size; index++)
		*((char *)new_block + index) = *((char *)ptr + index);

	free(ptr);
	return (new_block);
}

