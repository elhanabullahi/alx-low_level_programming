#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: File to append text to
 * @text_content: Content to write in the file
 *
 * Return: 1 on success, -1 on failure
 *         Do not create the file if it does not exist
 *         If filename is NULL, return -1
 *         If text_content is NULL, do not add anything to the file
 *         Return 1 if the file exists and -1 if the file does not exist
 *         or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
