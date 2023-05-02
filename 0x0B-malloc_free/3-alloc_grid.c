#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 *               array of integers.
 * @width:char
 * @height:char
 * Return: array of int
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (height < 1)
return (NULL);
grid = (int **)malloc(height * sizeof(grid));
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
