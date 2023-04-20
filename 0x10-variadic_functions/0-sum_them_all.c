#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:int
 * Return: int (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, result = 0;
if (n == 0)
return (NULL);
va_list al;
va_start(al, n);
while (i < n)
{
result += va_arg(al, int);
}
va_end(al);
return (result);
}
