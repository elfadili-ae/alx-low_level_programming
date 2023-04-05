#include "main.h"

/**
* _charcmp - compare string start/end characters
* @s: string
* @i: start index
* @j: end index
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
* is_palindrome - check if a string is palindrome or not
* @s: number
* Return: 1 (palindrome) 0 (not palindrome)
*/
int is_palindrome(char *s)
{
	int len = (int) strlen(s);

	if (len == 0)
		return (1);
	return (_charcmp(s, 0, len - 1));
}
