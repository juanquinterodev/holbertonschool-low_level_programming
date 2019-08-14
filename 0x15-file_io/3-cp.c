#include "holberton.h"
/**
*main - checks the code
*@argc: argument count
*@argv: argument stored in a pointer array.
*Return: asscheeks
*/
int main(int argc,char *argv[])
{
	int fd1 = 0, fd2 = 0, check = 0;
	char buf [1024];

	if (argc != 3)
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	if (argv[1] == NULL)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	fd1 = open(argv[1], O_RDONLY);
		if (fd1 == -1)
			exit(98);			

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd2 == -1)
			exit(99);
	check = read(fd1, buf, 1024);
	write(fd2, buf, check);
		if (check == -1)
			exit(99);
	close(fd1);
	close(fd2);
}
