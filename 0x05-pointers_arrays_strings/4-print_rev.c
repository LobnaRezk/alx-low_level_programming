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
int len = 0, i, length;
char temp;
while (*s != '\0')
{
len++;
s++;
}
length = len;

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[length];
s[length--] = temp;
}
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}
