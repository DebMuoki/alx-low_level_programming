#include <stddef.h>

/**
 * int_index - function searches for integer in an array.
 * @array: This is a  pointer to the integer array.
 * @size: This is the number of elements in the array.
 * @cmp: This is a  function pointer to the comparison function
 * Return: Return value is 0 else 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}

