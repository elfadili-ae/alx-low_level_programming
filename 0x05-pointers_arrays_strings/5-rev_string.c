#include "main.h"
/**
 * rev_string - reverse a string
 *@s: pointer to a string
 */
void rev_string(char *s)
{
	int i;
	char tmp;
	int l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = tmp;
	}
}
