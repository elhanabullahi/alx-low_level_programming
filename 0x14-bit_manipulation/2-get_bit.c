#include "main.h"

/**
 * get_bit - Get value of a bit at given index
 * @index: The index
 * @n: The range
 * Return:The value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	k <<= index;

	return ((n & k) ? 1 : 0);
}
