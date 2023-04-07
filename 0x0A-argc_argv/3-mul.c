#include "main.h"
#include <stdlib.h>
/**
 * main - print multi of two arguments
 * @argc: args count
 * @argv: args array
 * Return: 0 (sucess) 1 (error)
 */
int main(int argc, char *argv[])
{
	if ( argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
