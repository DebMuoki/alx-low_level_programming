#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at a given index.
 * @n: pointer to the number whose bit is to be set.
 * @index: index of the bit to set, starting from 0.
 *
 * Return: 1 else -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}

