#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: is the name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == 0)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		bytes_written = write(fd, text_content, len);

		if (bytes_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
