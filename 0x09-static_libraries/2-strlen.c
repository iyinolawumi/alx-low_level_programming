#include "main.h"

/**
 * _strlen - Function that return the length of the string
 * @s: Pointer to the string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length += 1;
	return (length);
}
