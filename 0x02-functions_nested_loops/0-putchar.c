#include"main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using putchar(char)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char kotoba[] = "_putchar\n";
	int i;

	for (i = 0; i < strlen(kotoba); i++)
		_putchar(kotoba[i]);

	return (0);
}
