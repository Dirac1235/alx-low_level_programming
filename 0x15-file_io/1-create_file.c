#include "main.h"
/**
 * create_file - it creates file with file name filename
 * @filename: name of the file name to be created if it doesn't exitst
 * @text_content: the content of text that will be written in the file
 * Return: The number of written characters
*/
int create_file(const char *filename, char *text_content)
{
	int fd, written_nums;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		written_nums = write(fd, text_content, len);

		if (written_nums < 0 || written_nums != len)
			return (-1);
	}

	close(fd);
	return (1);
}
