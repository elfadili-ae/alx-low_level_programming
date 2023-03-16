#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print a quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *txt = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(txt, sizeof(char), strlen(txt), stdout);
	return (1);
}
