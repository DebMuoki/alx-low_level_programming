#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - This initializes a struct dog
 * @d: a pointer to the struct dog
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: the owner of the dog
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

