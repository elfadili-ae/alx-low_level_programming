#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in reverse
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a_z[] = "abcdefghijklmnopqrstuvwxyz";
	size_t i;

	for (i = strlen(a_z); i > 0; i--)
		putchar(a_z[i - 1]);
	putchar('\n');
	return (0);
}
