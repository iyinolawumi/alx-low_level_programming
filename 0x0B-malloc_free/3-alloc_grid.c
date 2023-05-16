#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2-Dimensional array
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: On success - a pounter to the 2-Dimensional array
 *		else - NULL
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		alloc[k] = malloc(sizeof(int) * width);

		if (alloc[k] == NULL)
		{
			for (; k >= 0; k--)
				free(alloc[k]);
			free(alloc);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			alloc[k][l] = 0;
	}

	return (alloc);
}
