#include "main.h"

/**
 * read_textfile - It reads from file given by filename
 * @filename: The file we read
 * @letters: The number of charachters it should read
 * Return: The actual numbers of chars it could read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written_num;
	ssize_t file_read;
	char *buffer = NULL;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	file_read = read(fd, buffer, letters);
	if (file_read == -1)
		return (0);

	written_num = write(STDOUT_FILENO, buffer, file_read);

	if (written_num < 0)
		return (0);

	if (written_num != file_read)
		return (0);

	free(buffer);
	close(fd);
	return (file_read);
}
