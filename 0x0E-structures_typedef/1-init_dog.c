#include "dog.h"
#include <stdio.h>

/**
 * init_dog - A function that initializes a variable
 * @d: First element of the structure dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
