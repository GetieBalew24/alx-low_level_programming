#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFSIZE 1024

/**
 * _close - close a file descriptor and print an error message upon failure
 * @fd: the file descriptor to close
 *
 * Return: 0 upon success, -1 upon failure
 */

int _close(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}

/**
 * _read - read from a file and print an error message upon failure
 * @filename: the name of the file to read from
 * @fd: the file descriptor to read from
 * @buf: the buffer to write to
 * @count: the number of bytes to read
 * Return: The number of bytes read, or -1 upon failure
 */

ssize_t _read(const char *filename, int fd, char *buf, size_t count)
{
	ssize_t bytes_read = read(fd, buf, count);

	if (bytes_read > -1)
		return (bytes_read);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);
}

/**
 * _write - write to a file and print an error message upon failure
 * @filename: the name of the file to write to
 * @fd: the file descriptor to write to
 * @buf: the buffer to read from
 * @count: the number of bytes to write
 * Return: The number of bytes written, or -1 upon failure
 */

ssize_t _write(const char *filename, int fd, const char *buf, size_t count)
{
	ssize_t bytes_written = write(fd, buf, count);

	if (bytes_written > -1)
		return (bytes_written);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}

/**
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 * Return: Always 1
 */

int main(int argc, const char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(file_to);
		exit(99);
	}
	while ((bytes_read = _read(argv[1], file_from, buffer, BUFSIZE)))
	{
		if (bytes_read < 0)
		{
			_close(file_from);
			_close(file_to);
			exit(98);
		}
		if (_write(argv[2], file_to, buffer, bytes_read) < 0)
		{
			_close(file_from);
			_close(file_to);
			exit(99);
		}
	}
	if (_close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (_close(fd_out) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

}