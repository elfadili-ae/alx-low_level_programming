#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog from memory
 * @dog: dog to set free
 */
void free_dog(dog_t *dog)
{
	if (dog == NULL)
		return;
	free(dog->name);
	free(dog->owner);
	free(dog);
}
