#include "main.h"

/**
 * main - print arguments
 * @argc: args count
 * @argv: args array
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
