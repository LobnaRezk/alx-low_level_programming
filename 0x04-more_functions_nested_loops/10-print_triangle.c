#include "main.h"
/**
 * print_triangle -   function that prints a triangle, followed by a new line
 * @size: input of function
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i, j, c;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
_putchar(" ");
else 
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
