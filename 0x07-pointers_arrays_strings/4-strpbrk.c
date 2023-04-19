#include <stdio.h>
#include "main.h"
/**
 * _strpbrk- function that searches a string for any of a set of bytes.
 * @s: array
 * @accept: array
 * Return:array
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (*accept == *s)
return (s);
}
return (s + 1);
}
