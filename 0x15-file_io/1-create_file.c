#include "main.h"

/**
 * create_file - Creates a file
 * @filename: is the name of the file we create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;

	if (filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (; *(text_content + length) != '\0'; length++)
		;

	write(fd, text_content, length);

	close(fd);
	return (1);
}
