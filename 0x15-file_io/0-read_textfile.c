#include "main.h"

/**
 * read_textfile - reads file and print it to stdout
 * @filename: name of file to read from
 * @letters: number of letter should be read
 *
 * Description: this function reads a text
 * file and prints it to the POSIX standard output
 *
 * Return: number of letters read on success
 * and 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wtn, rd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = (char *)malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	
	rd = read(fd, buf, letters);
	if (rd < 0)
		return (0);

	wtn = write(STDOUT_FILENO, buf, rd);
	if (wtn < 0)
		return (0);

	close(fd);
	free(buf);
	return (wtn);
}
