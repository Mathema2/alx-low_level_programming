#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: dimesional array
 * @height: numbers of rows of the array
 */

void free_grid(int **grid, int height)
{
int x;

for (x = 0; x < height; x++)
{
	free(grid[x]);
}
free(grid);
}
