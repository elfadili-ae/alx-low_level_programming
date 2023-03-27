#include "main.h"
/**
 * swap_int - reset value to 98 with a pointer
 *@a: pointer to first int
 *@b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
}
