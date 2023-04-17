#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - function initializes a variable of type struct dog
  * @age: the age to be initialized
  * @owner: the owner to be initialized
  * @name: the name to be initialized
  * @d: struct dog pointer
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
