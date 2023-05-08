#include "main.h"

/**
 * main - a program that makes a copy of a file
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 * exit: 97 (usage) | 98 (failed read src) | 99 (failed write)
 * 100 (failed close fd)
 */
int main(int argc, char *argv[])
{
	int fd_cp, fd_src, rstat, wstat, cstat;
	char *buff[BUFFSIZE];
	mode_t modes = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		errMessage(97, "", 0);

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		errMessage(98, argv[1], 0);

	fd_cp = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, modes);
	if (fd_cp == -1)
		errMessage(99, argv[2], 0);

	while ((rstat = read(fd_src, buff, 1024)) != 0)
	{
		if (rstat == -1)
			errMessage(98, argv[1], 0);

		wstat = write(fd_cp, buff, rstat);
		if (wstat == -1)
			errMessage(99, argv[2], 0);
	}

	cstat = close(fd_src);
	if (cstat == -1)
		errMessage(100, argv[1], cstat);

	cstat = close(fd_cp);
	if (cstat == -1)
		errMessage(100, argv[2], cstat);

	return (0);
}

/**
 * errMessage - print the message correspending to the error code
 * @errCode: error code
 * @str: str of file
 * @val: value of the fd
 */
void errMessage(int errCode, char *str, int val)
{

	if (errCode == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (errCode == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
	else if (errCode == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
	else if (errCode == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", val);
		exit(100);
	}
}

/**
* _strlen - calculate the length of a string
* @s: string
* @j: index
* Return: string length
*/
int _strlen(char *s, int j)
{
	if (s[j] != '\0')
		return (_strlen(s, ++j));
	return (j);
}
