#include"main.h"

/**
 * _isalpha - cehck alphabetic character
 *
 * Description: return 1 if c is a letter, 0 otherwise
 * @c : ASCII code of the character
 *
 * Return: 1 (alphabet) 0 (otherwise)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
