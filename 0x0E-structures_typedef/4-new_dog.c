#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog
 *         NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
	{
	free(new_dog_ptr);
	return (NULL);
	}

	new_dog_ptr->age = age;

	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->owner == NULL)
	{
	free(new_dog_ptr->name);
	free(new_dog_ptr);
	return (NULL);
	}

	return (new_dog_ptr);
}

