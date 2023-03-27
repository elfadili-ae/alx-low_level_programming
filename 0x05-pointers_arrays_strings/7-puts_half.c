#include "main.h"
/**
 * puts_half - print half a string
 *@str: pointer to a string
 */
void puts_half(char *str)
{
	int i;
	int l = strlen(str);
	int n = l / 2;

	if (l % 2 != 0)
		n = n + 1;
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
