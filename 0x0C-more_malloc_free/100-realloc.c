#include "main.h"
#include <string.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of allocated space for ptr
 * @new_size: new size, in bytes, of new memory block
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size is zero, free ptr and return NULL */
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	/* If ptr is NULL, allocate new memory block */
	if (ptr == NULL)
	{
	new_ptr = malloc(new_size);
	return (new_ptr);
	}

	/* Allocate new memory block */
	new_ptr = malloc(new_size);

	/* Copy old data to new block */
	if (new_ptr != NULL)
	{
	memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));
	free(ptr);
	}

	return (new_ptr);
}

