#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: number of function
 * Return: returns 1 on if n is greater than zero (Success)
 *        returns 0 if n is zero returns -1 if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
