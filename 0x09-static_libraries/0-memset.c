#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: Points the memory area to be filled
  * @b: constant byte that filss memory
  * @n: number of buyes that will be filled
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
