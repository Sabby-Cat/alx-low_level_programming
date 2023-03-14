#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid
 * @grid: grid to be cleared
 * @height: height of grid to be cleared
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
