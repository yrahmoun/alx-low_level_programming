#include "main.h"

/**
 * free_grid - frees allocated grid
 * @grid: allocated grid
 * @height: heught of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
