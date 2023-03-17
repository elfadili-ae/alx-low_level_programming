#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print last digit of a random number
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	double num;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = (double) n / 10;
	lastD = (num - n / 10) * 10;
	if (lastD >= 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	if (lastD < 6 && lastD != 0)
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, lastD);
	if (lastD == 0)
		printf("Last digit of %d is %d and is zero\n", n, lastD);
	return (0);
}
