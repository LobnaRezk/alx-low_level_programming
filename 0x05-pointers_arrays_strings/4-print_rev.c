#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse, followed
 *              by a new line
 * @s: input of function is pointer
 * Return: Always return 0 (Success)
 */
void print_rev(char *s)
{
*s = strrev(*s);
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}
