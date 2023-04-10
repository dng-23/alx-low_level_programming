#include "main.h"
#include <stdio.h>

void handle_error(int value, int type, char *filename);
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
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!argv[1])
		handle_error(-1, 0, argv[1]);

	fd_file1 = open(argv[1], O_RDWR);
	handle_error(fd_file1, 0, argv[1]);

	fd_file2 = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	handle_error(fd_file2, 1, argv[2]);
	while (read_size != 0)
	{
		read_size = read(fd_file1, buffer, 1024);
		handle_error(read_size, 0, argv[1]);

		write_size = write(fd_file2, buffer, read_size);
		handle_error(write_size, 1, argv[2]);
	}
	close_val = close(fd_file1);
	handle_error(close_val, 2, argv[2]);
	return (0);
}

/**
 * handle_error - error handler for the main function
 * @fd_value: value of file descrepter
 * @type: type of error with int value
 * @filename: name of the file
 * Return: nothing
 */
void handle_error(int fd_value, int type, char *filename)
{
	char *msg[] = {"Error: Can't read from file", "Error: Can't write to file",
	     "Error: Can't close fd"};
	int ex[3] = {98, 99, 100};

	if (fd_value == -1)
	{
		if (type != 2)
			dprintf(STDERR_FILENO, "%s %s\n", msg[type], filename);
		else
			dprintf(STDERR_FILENO, "%s %d\n", msg[type], fd_value);
		exit(ex[type]);
	}
}
