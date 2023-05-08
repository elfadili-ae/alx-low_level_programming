#include "main.h"

/**
 * read_textfile - read a text file and print it to
 * PoSIX standard output.
 * @filename: the file to read
 * @letters: number of letters to read
 * Return: number of letters printed | 0 (otherwise)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rc, count = 0;
	char *buff;
	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	if ((rc = read(fd, buff, letters)) == -1)
		return (0);

	count = write(STDOUT_FILENO, buff, rc);
	if (count == -1 || count != rc)
		return (0);

	free(buff);
	close(fd);
	return (count);
}
