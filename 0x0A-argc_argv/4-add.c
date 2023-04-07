#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

/**
 * main - print the sum of arguments
 * @argc: args count
 * @argv: args array
 * Return: 0 (sucess) 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	long num;
	char *endp = NULL;
	char *np;

	if (argc > 2)
		for (i = 1; i < argc; i++)
		{
			np = argv[i];
			errno = 0;
			num = strtol(argv[i], &endp, 10);
			if (errno != 0 || endp == argv[i] || *np == '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum += (int) num;
		}
	printf("%d\n", sum);
	return (0);
}