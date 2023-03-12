nclude <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: On success
 * On error, -1 is returned, and errno is set appropriatley.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
