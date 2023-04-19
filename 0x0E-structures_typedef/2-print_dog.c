#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - function that prints struct dog
  * @d: the struct dog to print
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}