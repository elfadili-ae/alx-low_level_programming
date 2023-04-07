#include "main.h"
#include <stdlib.h>

/**
 * main - print the the min number of coins to make change for
 *an amount of money
 * @argc: args count
 * @argv: args array
 * Return: 0 (sucess) 1 (error)
 */
int main(int argc, char *argv[])
{
	int change = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			change++;
		}
		else if (money >= 10)
		{
			money -= 10;
			change++;
		}
		else if (money >= 5)
		{
			money -= 5;
			change++;
		}
		else if (money >= 2)
		{
			money -= 2;
			change++;
		}
		else
		{
			money -= 1;
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
