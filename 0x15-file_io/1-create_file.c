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

	if (filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (*(text_content + length))
	{
		length += 1;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, length);

	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
