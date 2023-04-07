#include "main.h"

/**
 * main - print the name of the program
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)*argv;
	return (0);
}
