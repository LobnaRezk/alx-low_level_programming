#include "main.h"
/**
 * _strncat- function that concatenates two strings
 * @dest: input of function
 * @src: input of function
 * @n: input of function
 * Return: array of string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
if (src[0] != '\0')
{
for (j = 0; j < n; j++, i++)
{
dest[i] = src[j];
}
}
return (dest);
}
