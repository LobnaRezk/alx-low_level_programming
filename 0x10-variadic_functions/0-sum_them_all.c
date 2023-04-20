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
int i = n, result = 0;
va_list al;
if (n == 0)
return (NULL);

va_start(al, n);
while (i--)
{
result += va_arg(al, int);
}
va_end(al);
return (result);
}
