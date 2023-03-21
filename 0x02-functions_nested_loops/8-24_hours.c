#include"main.h"

/**
 * jack_bauer - print minutes
 *
 * Description: print minutes from 00:00 to 23:59
 *
 * Return: last digit (int)
*/

int jack_bauer(void)
{
	int m;
	int n;

	for (m = 0; m < 24; m++)
	{
		for (n = 0; n < 60; n++)
		{
			_putchar((m / 10) + 48);
			_ptuchar((m % 10) + 48);
			_ptuchar(':');
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_puchar('\n');
		}
	}
}
