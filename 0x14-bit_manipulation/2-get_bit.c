#include "main.h"

/**
 * get_bit - Function returns the value of a bit at a given index.
 * @n: number to extract the bit from.
 * @index: The index of the bit to get (starting from 0).
 * Return: value of the bit at the given index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

