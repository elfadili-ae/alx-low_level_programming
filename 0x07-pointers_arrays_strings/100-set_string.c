#include "main.h"

/**
 * set_string - set valu of a pointer to a char
 * @s: pointer to a char pointer
 * @to: where to set value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
