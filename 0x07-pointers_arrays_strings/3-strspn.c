#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array
 * @accept: array
 * Return:int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c, j;

c = 0;
while (s[c] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[c] != accept[j])
j++;
if (accept[j] == '\0')
return (c);
c++;
}
return (c);
}
