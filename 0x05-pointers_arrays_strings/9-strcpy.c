#include "main.h"
/**
 * _strcpy - print every other character of a string
 *@src: pointer to a string to copy
 *@dest: pointer destination
 *Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = strlen(src);

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
