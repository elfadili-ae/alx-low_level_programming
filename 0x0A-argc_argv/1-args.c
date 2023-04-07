#include "main.h"

/**
 * main - print the name of the program
 * @argc: args count
 * @argv: args array
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)*argv;
	return (0);
}
