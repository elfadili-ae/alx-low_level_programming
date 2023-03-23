#include "main.h"

/**
 * _isdigit - check if digit
 * @c: number to check
 *
 * Return: 1 (digit) 0 (otherwise)
 */
int _isdigit(int c)
{
	char cc = c;

	if (cc >= 48 && cc <= 58)
		return (1);
	else
		return (0);
}
