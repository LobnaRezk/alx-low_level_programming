#include "main.h"
/**
 *  _puts - function that prints a string, followed by a new line, to stdout
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
