#include "holberton.h"
/**
* case97 - prints the Error 97
*/
void case97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
* case98 - prints the Error 98
*@file: takes the first argument
*/
void case98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
* case99 - prints the Error 99
*@file: Takes the second argument
*/
void case99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
* case100 - prints the 100 error
* @value: takes the number of the integer problem
*/
void case100(int value)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", value);
	exit(100);
}
/**
* main - checks the code
* @argc: the argument count
* @argv: the argument stored in a pointer array.
* Return: My checks
*/
int main(int argc, char *argv[])
{
	int fd1 = 0, fd2 = 0, rd = 0, wr = 0, count, cs1, cs2;
	char buffer[1024];

	if (argc != 3)
		case97();
	if (argv[1] == NULL)
		case98(argv[1]);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		case98(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		case99(argv[2]);
	rd = read(fd1, buffer, 1024);
	if (rd == -1)
		case98(argv[1]);
	wr = write(fd2, buffer, rd);
	if (wr == -1)
		case99(argv[2]);
	for (count = 0; rd == 1024; count++)
	{
		rd = read(fd1, buffer, 1024);
		if (rd == -1)
			case98(argv[1]);
		wr = write(fd2, buffer, rd);
		if (wr == -1)
			case99(argv[2]);
	}

	cs1 = close(fd1);
	if (cs1 == -1)
		case100(fd1);
	cs2 = close(fd2);
	if (cs2 == -1)
		case100(fd2);
	return (0);
}
