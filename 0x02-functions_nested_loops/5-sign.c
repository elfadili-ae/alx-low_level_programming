#include"main.h"

/**
 * print_sign - print the number's sign
 *
 * Description: return 1 if positive -1 if negative 0 if zero
 * @n: ASCII code of the character
 *
 * Return: 1 (alphabet) 0 (otherwise)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
