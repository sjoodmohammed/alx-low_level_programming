#include <stdlib.h>
#include "main.h"

/**
* free_grid - free the two dimensional array.
* @grid: grid of memory.
* @height: int.
* Return: void.
*/

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
free(grid[i]);
free(grid);

}
