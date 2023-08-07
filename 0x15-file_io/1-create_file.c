#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: what to put inside file
 *
 * Description: this function creates file
 * and fills it with input content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);

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

