#include "main.h"
int ctoi(const char *str, int i);
void rev_string(char *str);

/**
 * rev_string - reverse a string
 * @str: string to reverse
 */
void rev_string(char *str)
{
	int i, tmp;

	for (i = 0; i < (int) strlen(str) / 2; i++)
	{
		tmp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = tmp;
	}
}
/**
 * ctoi - get the value of the character
 * @str: string source
 * @i: character's index
 * Return: return character value else return 0
 */
int ctoi(const char *str, int i)
{
	if (i < (int) strlen(str))
		return (str[strlen(str) - i - 1] - 48);
	return (0);
}
/**
 * infinite_add - add to big numbers
 * @n1: first number
 * @n2: second number
 *@r: result pointer
 *@size_r: buffer size
 * Return: r:Success | 0:Can not be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1 = strlen(n1), len2 = strlen(n2), bLen, sum = 0, carry = 0;
	char c1, c2;

	bLen = len1 > len2 ? len1 : len2;
	if ((bLen + 1) < size_r)
	{
		for (i = 0; i < bLen; i++)
		{
			c1 = ctoi(n1, i);
			c2 = ctoi(n2, i);

			sum = c1 + c2 + carry;
			carry = 0;
			if (sum > 9)
			{
				carry = 1;
				sum -= 10;
			}
			r[i] = sum + 48;
		}
		if (carry)
			r[i++] = carry + 48;
		r[i] = 0;
		rev_string(r);
		return (r);
	}
	return (0);
}
