#include "main.h"
/**
 * main - copies file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description:
 *
 * Return:
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
	if (f_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	
	f_to = open(argv[1], O_CREAT | O_RDWR | O_TRUNC,  0664);
	if (f_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
        }

	while((rd = read(f_from, buf, 1024)) > 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
			exit(98);
		}

		wrt = write(f_to, buf, 1024);
		if (wrt == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                        exit(99);
                }

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
	return (1);
}
