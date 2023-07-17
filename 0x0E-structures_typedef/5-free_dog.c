#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees the memory allocated for a dog
 * @d: This is a Pointer to the dog to free
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

