#include "main.h"

/**
 * set_bit - Sets a bit at given index
 * @n: The range
 * @index: The index
 * Description: A bit is set at the given index
 * Return: Status code 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= k;

	return (1);
}
