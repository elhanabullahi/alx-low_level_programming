#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long integer to be converted to binary.
 * Return: no return value.
 */
void print_binary(unsigned long int n)
{
	/* check if n is greater than 0 */
	if (n > 0)
	{
		/* recursively shift n to the right and print the binary digit */
		if (n >> 1)
			print_binary(n >> 1);

		/* print the last binary digit */
		_putchar((n & 1) + '0');
	}
	else
	{
		/* if n is 0, print 0 */
		_putchar('0');
	}
} /*elhan*/
