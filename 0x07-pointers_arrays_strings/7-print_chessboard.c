#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer of char
 * Return: 0 Always (Success)
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%s", a[i][j]);

}
printf("\n");
}
}
