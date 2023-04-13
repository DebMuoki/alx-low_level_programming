#include <stdlib.h>
#include "main.h"

/**
  * *malloc_checked - function allocates using malloc
  * @b: number of bytes to be allocated
  * Return: pointer to allocated memory
  * else function terminates program with exit status of 98
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);

}
