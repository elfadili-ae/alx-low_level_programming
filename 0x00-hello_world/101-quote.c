#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for(int i=0; i<sizeof(txt); i++)
	{
		putchar(txt[i]);
	}
	return (1);
}
