#include "main.h"

/**
 * create_file - Creates a file
 * @filename: is the name of the file we create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int length = 0;
	char *temp;

	if (filename)
		return (-1);

	if (!text_content)
		text_content = "";

	temp = text_content;

	while (*temp)
	{
		length += 1;
		temp++;
	}

	fd = open(filename, O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	bytes_written = write(fd, text_content, length);

	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
