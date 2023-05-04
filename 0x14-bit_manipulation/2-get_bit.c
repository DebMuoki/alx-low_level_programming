#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: this is the number to get the bit from
 * @index: this is the index of the bit to get
 *
 * Return: the value of the bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}

