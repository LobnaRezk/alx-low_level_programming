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
int len = 0;
char *begin_ptr, *end_ptr, ch;
begin_ptr = s;
end_ptr = s;
while (*s != '\0')
{
len++;
s++;
end_ptr++;
}
for (i = 0; i < len / 2; i++)
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;
begin_ptr++;
end_ptr--;
}
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}
