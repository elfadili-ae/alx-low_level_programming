#include "main.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * printError - print error and exit
 * Exit: 98
 */
void printError()
{
	int i = 0;
	char err[] = "Error\n";

	while (err != '\0')
	{
		_putchar(err[i]);
		i++;
	}
	exit(98);
}
/**
 * alldigit - check if the args are digit
 * @a: arguments
 */
int alldigit(char *a)
{
	int j;

	for (j = 0; j < (int) strlen(a); j++)
		if (a[j] < '0' || a[j] > '9')
			return (0);
	return (1);
}

/**
 * main - multiplication of two numbers
 * @argc: args count
 * @argv: args vector
 * Return: result | exit(98) (failed)
 */
int main(int argc, char *argv[])
{
	int len1, len2, d1, d2, i, j, carry = 0, zero = 0;
	int *result = NULL;

	if (argc != 3)
		printError();
	if (!alldigit(argv[1]) || !alldigit(argv[2]))
		printError();
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	result = malloc(sizeof(int) * (len1 + len2 + 1));
	if (result == NULL)
		printError();
	for (i = len1 - 1; i >= 0; i--)
	{
		d1 = argv[1][i] - '0';
		for (j = len2 - 1, carry = 0; j >= 0; j--)
		{
			d2 = argv[2][j] - '0';
			carry += result[i + j + 1] + d1 * d2;
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry != 0)
			result[i + j + 1] += carry;
	}
	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0)
			zero = 1;
		if (zero == 1)
		_putchar(result[i] + '0');
	}
	if (zero != 1)
		_putchar('0');
	_putchar('\n');
	free(result);

	return (0);
}
