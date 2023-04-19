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
int j;
while (*s != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return (s + 1);
}
