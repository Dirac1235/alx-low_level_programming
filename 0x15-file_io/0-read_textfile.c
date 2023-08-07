#include "main.h"

/**
 * read_textfile - it reads a text file and prints it to
 * POSIX std output
 * @filename: The file we read
 * @letters: The numbers it should read and print
 * Return: The actual numbers it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, num, written_num;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	num = read(fd, buffer, letters);
	written_num = write(STDOUT_FILENO, buffer, num_to_print);

	if (written_num < 0)
		return (0);

	free(buffer);
	close(fd);
	return (num);
}
