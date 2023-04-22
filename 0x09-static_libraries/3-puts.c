#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  _puts - function that prints a string
 * @str: input of function is pointer
 * Return: Always return 0 (Success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
