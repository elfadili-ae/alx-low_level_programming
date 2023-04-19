#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: name to print
 * @f: print method
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
