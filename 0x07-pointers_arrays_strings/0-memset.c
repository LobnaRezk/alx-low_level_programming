#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n:int
 * Return:pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
return (s);
}
