#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that create an array of chars,
 * and initialize it with a specific char
 * @size: The size of tha array to work on
 * @c: The character of the array to work on
 *
 * Return: If size = 0, return NULL,
 * Otherwise a pointer to the array if NULL fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int k;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		array[k] = c;

	return (array);
}
