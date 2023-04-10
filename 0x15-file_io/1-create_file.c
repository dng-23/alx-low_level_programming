#include "main.h"
#include <string.h>

/**
 * create_file - creates file
 * @filename: pointer to file to create
 * @text_content: pointer to text
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_size;
	char *empty_file = "";

	if (!filename)
		return (-1);
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
