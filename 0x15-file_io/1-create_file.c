#include "main.h"

/**
 * create_file - create a text file
 * @filename: the file to read
 * @_text: text to write in the file
 * Return: 1 (success) | -1 (failed)
 */
int create_file(const char *filename, char *_text)
{
	int fd, count, lcount;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (_text != NULL)
	{
		for (lcount = 0; _text[lcount] != '\0'; lcount++)
			;
		count = write(fd, _text, lcount);
		if (count == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
