#include "main.h"
/**
 * print_rev - print a string in reverse
 *@s: pointer to a char/string
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
