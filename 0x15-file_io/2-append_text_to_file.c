#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: what to put inside file
 *
 * Description: this function that appends
 * text at the end of a file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	wrt = write(fd, text_content, strlen(text_content));
	if (wrt < 0)
		return (-1);

	close(fd);
	return (1);
}

