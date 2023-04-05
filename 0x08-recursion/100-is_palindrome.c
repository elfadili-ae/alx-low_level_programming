#include "main.h"

/**
* _charcmp - compare string start/end characters
* @x: number
* Return: 1 (same) 0 (different)
*/

int _charcmp(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (s[i] != s[j])
		return (0);
	if (i < j)
		return (_charcmp(s, ++i, --j));
	return (1);
}

/**
* _pow_recursion - calculate the power of a number
* @x: number
* Return: 1 (palindrome) 0 (not palindrome)
*/
int is_palindrome(char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;

	if (len == 0)
		return (1);
	return (_charcmp(s, 0, len - 1));
}
