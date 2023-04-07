#include "main.h"

/**
 * main - print the name of the program
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i])
		_putchar(argv[0][i++]);
	_putchar('\n');
	return (0);
}
