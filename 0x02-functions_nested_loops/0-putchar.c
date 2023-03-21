#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	char kotoba[] = "_putchar\n";

	for (i = 0; i < strlen(kotoba); i++)
	{
		_putchar(kotoba[i]);
	}
	return (0);
}
