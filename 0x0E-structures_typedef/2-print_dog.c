#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: dog variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).name);
	if ((*d).age == 0)
		printf("(nil)\n");
	else
		printf("%f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).owner);
}
