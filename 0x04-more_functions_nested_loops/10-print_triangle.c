#include "main.h"
/**
 * print_triangle -   function that prints a triangle, followed by a new line
 * @size: input of function
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = (size - i); j <= size; j--)
{
_putchar(" ");
if (j < i)
_putchar(35);

}
_putchar('\n');
}
}
else
_putchar('\n');
}
