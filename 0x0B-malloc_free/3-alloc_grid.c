#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2D-array
 * Description: Each element of the grid should be initialized to 0
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if ((width + height) < 2 || width < 1 || height < 1)
		return (NULL);

	grid = (int *)malloc(height * sizeof(grid));

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(**grid));
		
		if (grid[h] == NULL)
		{
			for (h--; h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
