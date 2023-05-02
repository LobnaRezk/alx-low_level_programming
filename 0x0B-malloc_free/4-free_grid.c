#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * free_grid -  function that frees a 2 dimensional grid previously
 *                  created by your alloc_grid function
 * @grid:array of int
 * @height:int
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i;
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
