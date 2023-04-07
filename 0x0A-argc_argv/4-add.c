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
	int i, j, sum = 0;
	long num;
	char *endp = NULL;

	if (argc >= 2)
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			num = strtol(argv[i], &endp, 10);
			sum += (int) num;
		}
	printf("%d\n", sum);
	return (0);
}
