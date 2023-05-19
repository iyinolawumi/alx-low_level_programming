#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that realocates a memory block using malloc and free
 * @ptr: Pointer to to previously allocated memory block
 * @old_size: size of previously allocated memory block
 * @new_size: Size of newly allocated memory block
 *
 * Return: On Success - Pointer ot the newly allocated memory block
 *		else - NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j, size;
	char	*old, *new;
	void *memb;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	memb = malloc(new_size);

	if (memb == NULL)
		return (NULL);

	size = (new_size < old_size) ? new_size : old_size;

	old = ptr;
	new = memb;

	for (j = 0; j < size; j++)
		new[j] = old[j];
	free(ptr);

	return (memb);
}
