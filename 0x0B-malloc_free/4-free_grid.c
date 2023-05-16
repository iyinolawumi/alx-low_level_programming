#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function to free a 2-Dimensional array previously created
 * @grid: Pointer to the array
 * @height: Height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);

	free(grid);
}
