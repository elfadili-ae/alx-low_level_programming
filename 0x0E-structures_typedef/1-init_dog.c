#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable dog
 * @d: dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
