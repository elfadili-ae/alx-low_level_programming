#include "main.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
 * print_arr - print an array
 * @arr: array to print
 * @size: array size
 */
void print_arr(int *arr, int size)
{
	int i, stop = 0;

	for (i = size - 2; i >= 0; i--)
	{
		if(arr[i] == 0 && !stop)
			continue;
		else
		{
			stop = 1;
			_putchar(arr[i] + '0');
		}
	}
	_print("\n");
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

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		_print("Error\n");
		return (98);
	}
	for (i = 0; i < len1; i++)
	{
		d1 = argv[1][len1 - 1 - i] - '0';
		for (j = 0; j < len2; j++)
		{
			d2 = argv[2][len2 - 1 - j] - '0';
			carry += result[i + j] + d1 * d2;
			result[i + j] = carry % 10;
			carry /= 10;
		}
		if (carry != 0)
		{
			result[i + j] += carry;
			carry = 0;
		}
	}
	print_arr(result, len1 + len2);
	free(result);

	return (0);
}
