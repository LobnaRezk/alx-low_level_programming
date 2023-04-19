#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: array
 * @c: array
 * Return:array
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (s + 1);
}
