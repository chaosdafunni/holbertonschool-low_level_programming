/**
 * free_grid - frees the memory
 * @grid: int used to free
 * @height: height of the int
 *
 * Return: void
 */

#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
