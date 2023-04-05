#include "main.h"

/**
 * _pow_recursion - calculate the power of a number
 * @x: number
 * @y: power
 * Return: @n power of @y
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (-1);
}
