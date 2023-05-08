#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 *
 * @s: Pointer to the string in question
 * @c: Character to be searched for
 *
 * Return: A pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
