#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the created grid
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **grid;

	if (width < 1 || height < 1)
		return (0);
	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (0);
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			while (i)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (0);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
