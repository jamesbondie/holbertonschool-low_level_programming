#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - our main array creater supervisor
 * @grid: asdasdasdasdasdasd
 * @height: asodjaoisjdaiosjdais
 * Return: 1 0 0asdoasdasdasd
 *
 *
 *
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
