#include "main.h"
/**
 * err_hndl - handles errors
 * @f_from: file copied from
 * @f_to: file copied to
 * @wrt: return of write function
 * @argv: program input arguments
 *
 * Description: this function handle error
 * according to given files names
 */
void err_hndl(int f_from, int f_to, int wrt, char **argv)
{
	if (f_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (f_to < 0 || wrt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: this function copies
 * file content to another file
 *
 * Return: 0 on success, exit with different
 * values on fail
 */
int main(int argc, char **argv)
{
	int f_from, f_to, rd, wrt;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,  0664);

	err_hndl(f_from, f_to, 0, argv);

	while ((rd = read(f_from, buf, 1024)) > 0)
	{
		wrt = write(f_to, buf, rd);
		err_hndl(0, f_to, wrt, argv);
	}
	err_hndl(rd, 0, 0, argv);

	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_from);
		exit(100);
	}

	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_to);
		exit(100);
	}
	return (0);
}

