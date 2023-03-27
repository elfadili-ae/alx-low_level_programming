#include "main.h"
/**
 * _atoi - int every other character of a string
 *@s: string to convert
 *Return: return integer | 0 (empty strin)
 */
int _atoi(char *s)
{
	int i = 0;
	int d0 = -1;
	unsigned int num;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9' && d0 == -1)
		{
			d0 = i;
		}
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	if (d0 == -1)
		return (0);
	i = d0 + 1;
	num = s[d0] - '0';
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		else
			break;
		i++;
	}
	return (num * sign);
}
