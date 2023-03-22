#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int r, c, prod;
for (r = 0; r <= 9; r++)
{
_putchar(48);
for (c = 1; c <= 9; c++)
{
_putchar(',');
_putchar(' ');
prod = r * c;

if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
