#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print alphabets
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a_z[] = "abcdefghijklmnopqrstuvwxyz\n";
	size_t i = 0;

	for (i = 0; i < strlen(a_z); i++)
		putchar(a_z[i]);
	return (0);
}
