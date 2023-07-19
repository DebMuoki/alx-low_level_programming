#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - This Executes function on every element of the array.
 * @array: This is a pointer to the integer array
 * @size: This is the number of elements in the array.
 * @action: This is a function pointer to the function to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}

