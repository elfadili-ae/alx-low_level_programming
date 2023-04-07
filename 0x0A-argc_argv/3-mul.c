#include "main.h"

/**
 * main - print multi of two arguments
 * @argc: args count
 * @argv: args array
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	if ( argc == 3)
		printf("%ld\n", atol(argv[1]) * atol(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
