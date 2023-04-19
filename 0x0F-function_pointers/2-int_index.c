#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp doesn't return 0, or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
		int index = -1;
		int i;

		if (array == NULL || cmp == NULL || size <= 0)
			return (-1);

		for (i = 0; i < size && index == -1; i++)
		{
			if (cmp(array[i]))
				index = i;
		}

		return (index);
}


