#include "main.h"
#include <string.h>

/**
 * wcount - count the words length
 * @str: string
 * Return: word count
 */
int wcount(char *str)
{
	int i, wc = 0, d = 0;

	if (str[0] != ' ')
		d = 1;
	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] == ' ')
			d = 1;
		if (str[i] != ' ' && d == 1)
		{
			d = 0;
			wc++;
		}
	}
	return (wc);
}
/**
 * wlen - word span
 * @str: string
 * @pos: starting position
 * Return: the length of the word
 */
int wlen(char *str, int pos)
{
	int len = 0;

	while (str[pos] && str[pos] != ' ')
	{
		len++;
		pos++;
	}
	return (len);
}
/**
 * strtow - split a string into words
 * @str: string to split
 * Return: pointer to array | NULL (failed)
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, len, pos = 0, wc = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = wcount(str);
	if (wc == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (wc + 1));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < wc; j++)
	{
		for (; str[pos] == ' '; pos++)
			;

		len = wlen(str, pos);
		arr[j] = (char *) malloc(sizeof(char) * (len + 1));
		if (arr[j] == NULL)
		{
			for (i = 0; i < wc; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (i = 0; i < len; i++)
			arr[j][i] = str[pos++];
		arr[j][i] = '\0';
	}
	arr[wc] = NULL;
	return (arr);
}
