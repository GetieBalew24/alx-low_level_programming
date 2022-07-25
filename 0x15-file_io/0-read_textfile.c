#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: If filename is NULL, the file cannot be opened or read, or
 * write fails or returns an unexpected number of bytes, return 0.
 * Otherwise, return the actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	ssize_t b_read;
	ssize_t b_write;
	int fd;

	if (!(filename && letters))
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	b_read = read(fd, buf, letters);
	close(fd);

	if (b_read < 0)
	{
		free(buf);
		return (0);
	}
	if (!b_read)
		b_read = letters;
	b_write = write(STDOUT_FILENO, buf, b_read);
	free(buf);
	if (b_write < 0)
		return (0);
	return (b_write);
}
