#include "main.h"
#include <string.h>

/**
 * create_file - creates file
 * @filename: pointer to file to create
 * @text_content: pointer to text
 * Return: 1 on success, -1 on failure
 */
int main (int argc, char *argv)
{
	int fd;
	ssize_t write_size;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (!text_content)
		write_size = write(fd, empty_file, 1);
	else
		write_size = write(fd, text_content, strlen(text_content));
	close(fd);
	if (write_size == -1)
		return (-1);
	return (1);
}
