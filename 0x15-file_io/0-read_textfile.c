#include "main.h"

/**
 * read_textfile - It reads from file given by filename
 * @filename: The file we read
 * @letters: The number of charachters it should read
 * Return: The actual numbers of chars it could read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int  fd, num, written_num;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	num = read(fd, buffer, letters);
	written_num = write(STDOUT_FILENO, buffer, num);

	if (written_num < 0)
		return (0);

	free(buffer);
	close(fd);
	return (num);
}
