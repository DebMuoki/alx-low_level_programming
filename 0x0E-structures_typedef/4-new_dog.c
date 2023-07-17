#include <stdlib.h>
#include <string.h>
#include "dog.h"

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
	int name_length, owner_length;

	/* Calculate the lengths of the name and owner strings */
	name_length = strlen(name);
	owner_length = strlen(owner);

	/* Allocate memory for the new dog struct */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	return (NULL);

	/* Allocate memory for the name and owner strings */
	new_dog_ptr->name = malloc((name_length + 1) * sizeof(char));
	new_dog_ptr->owner = malloc((owner_length + 1) * sizeof(char));
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
	free(new_dog_ptr->name);
	free(new_dog_ptr->owner);
	free(new_dog_ptr);
	return (NULL);
	}

	/* Copy the name and owner strings to the newly allocated memory */
	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);

	/* Assign the age */
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}

