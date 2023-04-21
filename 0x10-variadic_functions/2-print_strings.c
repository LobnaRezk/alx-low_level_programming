#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator:int
 * @n:int
 * Return: int (sum)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{ 
unsigned int i = 0;
va_list al;
va_start(al, n);

while (i < n)
{
printf("%d", va_arg(al, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(al)
}
