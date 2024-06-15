#include <stdlib.h>

/**
 * free_grid -  function that returns a pointer to 2 dimensional array of int
 *
 * @grid:  the address of the two dimensional grid
 * @height: width of the grid
 *
 * Return: nothing
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
