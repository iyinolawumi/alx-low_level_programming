#include "main.h"

/**
 * _memcpy - Function that copies a number of bytes from one memory to another
 * @dest: memory destination
 * @src: source of memory copied
 * @n: number of bytes that need to be copied
 *
 * Return: A pointer to the memory destination area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
