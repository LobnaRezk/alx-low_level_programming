#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator:array of char
 * @n:int
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
