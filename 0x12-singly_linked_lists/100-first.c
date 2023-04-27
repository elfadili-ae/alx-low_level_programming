#include "lists.h"
#include <stdio.h>

/**
 * Awake - execute code before main
 */
void __attribute__ ((constructor)) Awake()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore ");
	printf("my house upon my back!\n");
}
