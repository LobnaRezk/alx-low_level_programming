#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: array
 * @src: array
 * @n:int
 * Return:array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
