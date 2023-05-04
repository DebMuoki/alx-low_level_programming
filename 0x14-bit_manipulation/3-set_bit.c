#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index
 * @n: this is a pointer to the number to modify
 * @index: an index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1ul << index);

	return (1);
}

