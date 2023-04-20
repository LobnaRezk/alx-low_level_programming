#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the chessboard.
 * @a: pointer of char
 * @size:int
 * Return: 0 Always (Success)
 */
void print_diagsums(int *a, int size)
{
int i, j, sumx = 0, sumy = 0;
for (i = 0; i < size; i++)
{
sumx = sumx + a[i];
sumy = sumy + a[size - i - 1];
}

printf("%d, %d", sumx, sumy);
putchar('\n');
}
