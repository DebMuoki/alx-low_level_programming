#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array,
 *         or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int total_size;
	int index;

	if (min > max)
		return (NULL);

	total_size = max - min + 1;
	array = (int *)malloc(total_size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (index = 0; index < total_size; index++)
		array[index] = min++;

	return (array);
}

