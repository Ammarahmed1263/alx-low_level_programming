#include "main.h"
/**
 * err_hndl - handles errors
 * @f_from: file copied from
 * @f_to: file copied to
 * @argv: program input arguments
 *
 * Description: this function handle error
 * according to given files names
 */
void err_hndl(int f_from, int f_to, char **argv)
{
	if (f_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}

	if (f_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
}
/**
 * main - copies file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description:
 *
 * Return: 0 on success, exit with different
 * values on fail
 */
int main(int argc, char **argv)
{
	int f_from, f_to, rd, wrt;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(argv[0], O_RDWR);
	f_to = open(argv[1], O_CREAT | O_RDWR | O_TRUNC,  0664);

	err_hndl(f_from, f_to, argv);

	while ((rd = read(f_from, buf, 1024)) > 0)
	{
		err_hndl(-1, 0, argv);

		wrt = write(f_to, buf, 1024);
		err_hndl(0, -1, argv);
	}

	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %i", f_from);
		exit(100);
	}

	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %i", f_to);
		exit(100);
	}
	return (0);
}
