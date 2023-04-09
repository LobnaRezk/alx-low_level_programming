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
for (j =0; j <= n; j++)
{
dest[i++] = src[j];
}
return (dest);
}
