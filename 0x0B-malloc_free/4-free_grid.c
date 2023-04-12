#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees grid
 * @grid: grid to free
 * @height: number of rows
 *
 * Return: NULL on failure
 * or width, height equals zero
 * else return pointer to grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[k]);
	}
	free(grid);
}
