#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element of an array.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to apply to each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		int *ptr;

		if (!array || !action)
			return;

		ptr = array;

		while (size--)
		action(*(ptr++));
}

