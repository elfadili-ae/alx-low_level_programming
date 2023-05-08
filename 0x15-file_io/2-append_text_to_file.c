#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file's name
 * @_text: the text to append
 * Return: 1 (success) | -1 (otherwise)
 */
int append_text_to_file(const char *filename, char *_text)
{
	int fd, write_stat, lcount;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1) /* check open success? */
		return (-1);

	if (_text == NULL) /* check text if null */
		return (1);

	for (lcount = 0; _text[lcount] != '\0'; lcount++)
		;

	write_stat = write(fd, _text, lcount);
	if (write_stat == -1) /* check write if failed */
		return (-1);

	close(fd);
	return (1);
}
