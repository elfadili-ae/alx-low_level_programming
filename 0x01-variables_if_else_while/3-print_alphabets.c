#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: print alphabets uppercase & lowercase
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a_z[] = "abcdefghijklmnopqrstuvwxyz";
	size_t i = 0;

	for (i = 0; i < strlen(a_z); i++)
		putchar(a_z[i]);
	for (i = 0; i < strlen(a_z); i++)
		putchar(toupper(a_z[i]));
	putchar('\n');
	return (0);
}
