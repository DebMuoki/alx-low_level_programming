#include "function_pointers.h"

/**
  * int_index - searches for an integer in an array
  * @array: a pointer to the number of integer
  * @cmp: this is a pointer to the comparison function
  * @size: the number of elements in an array
  * Return: 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = -1;
	int k;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (k = 0; k < size && index == -1; k++)
	{
		if (cmp(array[k]))
			index = k;
	}

	return (index);
}

