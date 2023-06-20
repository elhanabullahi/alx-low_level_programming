#include "main.h"

/**
 * _strlen - function definition
 * Description: finds the length of a string
 * @s: the string pointer
 * Return: length of the string
 */

int _strlen(const char *s)
{
    int index;

    for (index = 0; s[index] != '\0'; index++)
    {}
    return (index);
}
