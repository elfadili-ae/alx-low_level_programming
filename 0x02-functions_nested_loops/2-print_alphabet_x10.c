#include"main.h"

/**
 * print_alphabet_x10 - print alphabet x 10
 *
 * Description: print alphabet, in lowercase 10 times
 *
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (i < 10)
	{
		for (j = 0; j < (int)strlen(alphabets); j++)
			_putchar(alphabets[j]);
		i++;
	}
}
