#include"main.h"

/**
 * _islower - cehck lowercase
 *
 * Description: return 1 if it's lowercase and 0 if not
 * @c : ASCII code of the character
 *
 * Return: 1 (lowercase) 0 (otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
