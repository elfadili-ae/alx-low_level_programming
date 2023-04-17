#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - print every other character of a string
 *@src: pointer to a string to copy
 *@dest: pointer destination
 *@l: length of src
 *Return: return dest
 */
char *_strcpy(char *dest, char *src, int l)
{
	int i;

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog | NULL (failed)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int nameLen, ownerLen;

	for (nameLen = 0; name[nameLen]; nameLen++)
		;
	for (ownerLen = 0; owner[ownerLen]; ownerLen++)
		;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * nameLen + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name, nameLen);

	newDog->owner = malloc(sizeof(char) * ownerLen + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->owner, owner, ownerLen);

	newDog->age = age;
	return (newDog);
}
