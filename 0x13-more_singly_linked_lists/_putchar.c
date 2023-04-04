#include "lists.h"

/**
 * _putchar - print/writes character
 * @character: The character to print
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (writes(1, &character, 1));
}

