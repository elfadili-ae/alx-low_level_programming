#include "main.h"

/**
* babylonian - calculate the the sqrt of a a number
* @n: number
* @y: intial guess for the root
* Return: square root | -1 (error)
*/
int babylonian(int n, int y)
{
	int new_y = (y + n / y) / 2;

	if (y == new_y)
	{
		if ((y * y) == n)
			return (y);
		else
			return (-1);
	}
	else
		return (babylonian(n, new_y));
}
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: number
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (babylonian(n, n / 2));
}
