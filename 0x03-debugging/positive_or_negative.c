#include "main.h"

/**
 * positive_or_negative - psotive or negative
 *
 *@num: integer to check
 *
 */

void positive_or_negative(int num)
{
	int n = num;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
}
