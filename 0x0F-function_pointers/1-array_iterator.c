#include "function_pointers.h"

/**
 * array_iterator - It applies a function to each element of an array
 * @array: It is a Pointer to the array of integers
 * @size the size of the array
 * @action: Pointer to the function to apply to each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;
		if (!array || !action)
			return;

		for (j = 0; j < size; j++)
			action(array[j]);
}

