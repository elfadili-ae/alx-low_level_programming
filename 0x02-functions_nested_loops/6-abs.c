#include"main.h"

/**
 * _abs - absolute value of an int
 *
 * Description: compute the aboluste value of an int
 * @n: integer
 *
 * Return: abs(int)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
