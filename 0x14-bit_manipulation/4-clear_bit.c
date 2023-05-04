#include "main.h"

/**
 * clear_bit - this function Sets the value of a bit to 0 at a given index.
 * @n: this is a Pointer to the number whose bit needs to be cleared.
 * @index: an Index of the bit starting from 0.
 *
 * Return: 1 if it succeeds , or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);


	*n &= ~(1UL << index);

	return (1);
}

