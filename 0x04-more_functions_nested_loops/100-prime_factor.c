#include "main.h"

/**
 * main - print the largest prime factor of the number 612852475143
 *
 *Return: 0 (success)
 */
int main(void)
{
	long int num = 612852475143;
	long int i;
	int counter = 0;

	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
			counter = i;
		}
	}
	printf("%d\n", counter);
	return (0);
}
