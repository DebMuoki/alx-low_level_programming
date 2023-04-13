#include "main.h"
#include <stddef.h>
#include <stdlib.h>



/**
 * *_memset - function that fills the memory with a constant byte
 * @k: the memory area to be filled
 * @j: the char to copy
 * @m: the number of times to copy b
 * Return: pointer to the memory area k
 */

char *_memset(char *k, char j, unsigned int m)

{

	unsigned int p;



	for (p = 0; p < m; p++)

	{

		k[p] = j;

	}



	return (k);

}


/**
 * _calloc - function that allocate memory for an array and initialize to zero
 * @nmemb: number of elements to allocate memory for
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated memory or NULL if nmemb/size is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
	return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

