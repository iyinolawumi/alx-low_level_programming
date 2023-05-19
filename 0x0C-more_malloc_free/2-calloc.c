#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function to allocate memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in the array
 *
 * Return: On success - Pointer to the allocated memory
 *		otherwise - NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	void *memory;
	char  *input;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	input = memory;

	for (k = 0; k < (size * nmemb); k++)
		input[k] = 0;

	return (memory);
}
