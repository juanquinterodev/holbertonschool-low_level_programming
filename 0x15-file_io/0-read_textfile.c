#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: pointer to char
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
int _strlen;
	if (filename == NULL)
	{
	return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
	return (0);
	}
	_strlen = read(fd, buf, letters);
	if (write(STDIN_FILENO, buf, _strlen) != _strlen)
	{
	return (0);
	}
	return (_strlen);
close(fd);
free(buf);
}
