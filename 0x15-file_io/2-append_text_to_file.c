#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file to append to
 * @text_content: pointer to text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_size;
	char *empty_file = "";

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
		write_size = write(fd, text_content, strlen(text_content));
	close(fd);
	if (write_size == -1)
		return (-1);
	return (1);
}
