#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog struct
 * @d: pointer to the dog struct to free
 *
 * Description: frees the memory allocated for the name and owner strings,
 * and then frees the memory allocated for the dog struct itself.
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

