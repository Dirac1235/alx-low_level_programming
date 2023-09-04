#include "main.h"
/**
 * append_text_to_file - it appends text at the end of file
 * @filename: The name of the file
 * @text_content: The text to be appended to the file at the end of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_num;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	
	if (text_content)
	{
		while (text_content[len])
			len++;

		written_num = write(fd, text_content, len);

		if (written_num < 0 || written_num != len)
			return (-1);
	}

	close(fd);
	return (1);
}