#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Function creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The Owner of the dog
 * Return: Pointer to the newly created dog or NULL if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_;
	int name_length1, owner_length2;


	length1 = strlen(name);
	length2 = strlen(owner);


	new_dog_ = malloc(sizeof(dog_t));
	if (new_dog_ == NULL)
	return (NULL);


	new_dog_->name = malloc((length1 + 1) * sizeof(char));
	new_dog_->owner = malloc((length2 + 1) * sizeof(char));
	if (new_dog_->name == NULL || new_dog_->owner == NULL)
	{
	free(new_dog_->name);
	free(new_dog_->owner);
	free(new_dog_);
	return (NULL);
	}


	strcpy(new_dog_->name, name);
	strcpy(new_dog_->owner, owner);

	new_dog_->age = age;

	return (new_dog_);
}

