#include "holberton.h"

/**
* create_file - creates a file
* @filename: name of the file
* @text_content: text to write in the file
* Return: 1 in succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, check, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		check = write(fd, text_content, i);
	}

	if (check == -1 || check != i)
		return (-1);

	return (1);
}
