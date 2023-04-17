#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees memory allocated for a dog struct
 * @d: pointer to the dog struct to free
 *
 * Description: It frees memory allocated for owner and name strings,
 * and frees the memory allocated for the dog struct.
 */

void free_dog(dog_t *d)
{
		if (d != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
}

