#include "main.h"

/**
 * main - Program that copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Description:
 * Usage: cp file_from file_to
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int f_from, f_to, rf, wf;
	char buff[1024];

	if (argc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	f_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (1)
	{
		rf = read(f_from, buff, 1024);

		if (rf == 0)
			break;
		else if (rf == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

		wf = write(f_to, buff, rf);
		if (wf == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(f_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", f_from), exit(100);

	if (close(f_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", f_to), exit(100);

	return (0);
} /*elhan*/
