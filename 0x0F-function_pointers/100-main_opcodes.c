#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcode
 * @argc: args count
 * @argv: args vector
 * Return: 0 (success) | exit(1) (failed)
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *buf;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	buf = (char *) main;
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", buf[i]);
	}
	printf("%02hhx\n", buf[i]);
	return (0);
}
