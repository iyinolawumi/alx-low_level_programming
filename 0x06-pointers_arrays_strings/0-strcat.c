#include "main.h"

/**
 * strcat - a function that concatenates two strings.
 * @dest: A pointer to the string 1.
 * @src: Source string 2.
 * Return: Returns the pointer
 */
char *strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (index = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
