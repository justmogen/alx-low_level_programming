#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2DM array
 * @grid:the 2DM array to be freed
 * @height:height of the grid
 */
void free_grid(int **grid, int height)
{
	int ndx;
	for (ndx = 0; ndx < height; ndx++)
		free(grid[ndx]);

	free(grid);
}
