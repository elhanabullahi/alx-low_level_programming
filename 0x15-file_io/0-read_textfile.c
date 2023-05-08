#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX standard output.
 * @filename: File to print from.
 * @letters: Number of letters to print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int read_len, write_len;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);

	if (fd == -1 || buffer == NULL)
		return (0);

	read_len = read(fd, buffer, letters);

	if (read_len == -1)
	{
		free(buffer);
		return (0);
	}

	write_len = write(STDOUT_FILENO, buffer, read_len);

	free(buffer);
	close(fd);

	if (write_len == -1)
		return (0);

	return (write_len);
} /*elhan*/
