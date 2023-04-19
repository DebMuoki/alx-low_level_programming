#include "function_pointers.h"

/**
 * array_iterator - It applies a function to each element of an array.
 * @array: It is a pointer to the array of integers.
 * @size: the size of the array.
 * @action: a pointer to the function to apply to each element.
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

