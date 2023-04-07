#include "main.h"
/**
 *
 */
void print_num(int num)
{
	_putchar(num % 10 + '0');
	if (num / 10 != 0)
		print_num(num / 10);
	else
		_putchar('\n');
}

/**
 * main - print the name of the program
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	print_num(argc - 1);
	return (0);
}
