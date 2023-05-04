#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * get_endianness - check for endianness
 * to get another anumber
 *Return: 0 big-endianness 1 little endianness
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
