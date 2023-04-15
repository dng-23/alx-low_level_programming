#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024

void handle_error(int fd_value, int type, char *filename, int fd1, int fd2);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int fd_file1, fd_file2;
	ssize_t read_size, write_size, close_val;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (access(argv[1], F_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_file1 = open(argv[1], O_RDONLY);
	handle_error(fd_file1, 0, argv[1], -1, -1);
	fd_file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	handle_error(fd_file2, 1, argv[2], fd_file1, -1);

	while ((read_size = read(fd_file1, buffer, BUFFER_SIZE)) > 0)
	{
		write_size = write(fd_file2, buffer, read_size);
		handle_error(write_size, 1, argv[2], fd_file1, fd_file2);
	}
	if (read_size == -1)
	{
		handle_error(-1, 0, argv[1], fd_file1, fd_file2);
	}
	close_val = close(fd_file1);
	handle_error(close_val, 2, argv[1], fd_file1, fd_file2);
	close_val = close(fd_file2);
	handle_error(close_val, 2, argv[2], fd_file1, fd_file2);

	return (0);
}

/**
 * handle_error - error handler for the main function
 * @fd_value: value of file descrepter
 * @type: type of error with int value
 * @filename: name of the file
 * @fd1: file descriptor
 * @fd2: file descriptor
 * Return: nothing
 */
void handle_error(int fd_value, int type, char *filename, int fd1, int fd2)
{
	char *msg[] = {"Error: Can't read from file", "Error: Can't write to",
		"Error: Can't close fd"};
	int ex[] = {98, 99, 100};

	if (fd_value == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", msg[type], filename);
		if (fd1 >= 0)
			close(fd1);
		if (fd2 >= 0)
			close(fd2);
		exit(ex[type]);
	}
}

