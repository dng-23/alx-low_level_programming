#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file to read from
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_size, write_size;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	read_size = read(fd, buffer, letters);
	if (read_size == -1)
	{
		close(fd);
		return (0);
	}
	write_size = write(STDOUT_FILENO, buffer, read_size);
	close(fd);
	if (write_size == -1)
		return (0);
	return (write_size);
}
