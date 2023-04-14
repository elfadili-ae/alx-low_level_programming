#include "main.h"
#include <string.h>
#include <stdlib.h>

void _print(char *str);
void alldigit(char *a);
void print_arr(int *arr, int size);

/**
 * _print - print string in reverse
 * @str: string
 */
void _print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * alldigit - check if the args are digit
 * @a: arguments
 */
void alldigit(char *a)
{
	int j;

	for (j = 0; j < (int) strlen(a); j++)
		if (a[j] < '0' || a[j] > '9')
		{
			_print("Error\n");
			exit(98);
		}
}
/**
 * printArray - print an array
 * @arr: array to print
 * @size: array size
 */
void printArray(int *arr, int size)
{
	int i, start = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i])
			start = 1;
		if (start)
			_putchar(arr[i] + '0');
	}
	if (!start)
		_putchar('0');
	_putchar('\n');
}
/**
 * main - multiplication of two numbers
 * @argc: args count
 * @argv: args vector
 * Return: result | exit(98) (failed)
 */
int main(int argc, char *argv[])
{
	int *result, len1, len2, d1, d2, i, j, carry = 0;

	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}
	alldigit(argv[1]);
	alldigit(argv[2]);
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	result = malloc(sizeof(int) * (len1 + len2 + 1));
	if (result == NULL)
	{
		_print("Error\n");
		return (98);
	}
	for (i = 0; i < len1 + len2 + 1; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		d1 = argv[1][i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = argv[2][j] - '0';
			carry += result[i + j + 1] + d1 * d2;
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry != 0)
		{
			result[i + j + 1] += carry;
			carry = 0;
		}
	}
	printArray(result, len1 + len2);
	free(result);

	return (0);
}
