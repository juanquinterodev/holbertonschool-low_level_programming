#include "holberton.h"

/**
* append_text_to_file - append text at the end of a file
* @filename: name of the file
* @text_content: text to write in the file
* Return: 1 in succes, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i] != '\0')
		i++;

	check = write(fd, text_content, i);

	if (check == -1)
		return (-1);

	return (1);
}
