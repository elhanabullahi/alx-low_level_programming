#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: File to create
 * @text_content: Content to write in the file
 *
 * Return: 1 on success, -1 on failure
 *         If the file cannot be created or written, return -1
 *         The created file must have permissions: rw-------
 *         If the file already exists, do not change the permissions
 *         If the file already exists, truncate it
 *         If filename is NULL, return -1
 *         If text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	wr = write(fd, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
} /*elhan*/
