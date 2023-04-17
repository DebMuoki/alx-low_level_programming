#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - functon returns length of a string
 * @string: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *string)
{
		int index;

		index = 0;

		while (string[index] != '\0')
		{
			index++;
		}

		return (index);
}

/**
 * *_strcpy - function copies string from source to destination
 * @destination: pointer to buffer in which string is copied
 * @source: string to be copied
 *
 * Return: pointer to destination
 */
char *_strcpy(char *destination, char *source)
{
		int length, index;

		length = 0;

		while (source[length] != '\0')
		{
			length++;
		}

		for (index = 0; index < length; index++)
		{
			destination[index] = source[index];
		}

		destination[index] = '\0';

		return (destination);
}

/**
 * new_dog - function that creates a new dog
 * @name: name dog
 * @age: age dog
 * @owner: owner of dog
 *
 * Return: pointer to the new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *dog;
		int length1, length2;

		length1 = _strlen(name);
		length2 = _strlen(owner);

		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * (length1 + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * (length2 + 1));
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}

		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;

		return (dog);
}

