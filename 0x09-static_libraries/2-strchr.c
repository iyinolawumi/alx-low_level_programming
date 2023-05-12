#include "main.h"

/**
 * _strchr - Function that locates a charater in a string
 * @s: Pointer to the string
 * @c: Character to be searched for
 *
 * Return: A pointer to the first occurence
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}

	return ('\0');
}
