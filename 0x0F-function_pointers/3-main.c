#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * Description: a program that performs simple operaitons
 * @argc: args count
 * @argv: args vector
 * Return: 0 (success) | Exit(98) (Error)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", fun(a, b));
	return (0);
}
