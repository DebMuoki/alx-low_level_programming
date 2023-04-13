#include "main.h"
#include <stdlib.h>
/**
  * *array_range - function creates an array of integers
  * @min: the minimum range of values that is stored
  * @max: the maximum range of values that is tored
  * Return: it returns the pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *array;
	int index, array_size;

	if (min > max)
	{
		return (NULL);
	}

	array_size = max - min + 1;

	array = malloc(sizeof(int) * array_size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; min <= max; index++)
	{
		array[index] = min++;
	}

	return (array);
}

