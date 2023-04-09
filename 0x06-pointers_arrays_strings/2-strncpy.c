#include "main.h"
/**
 * _strncpy- function that copies a string.
 * @dest: input of function
 * @src: input of function
 * @n: input of function
 * Return: array of string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (i = 0, j = 0; dest[i] != '\0', src[j] < n; i++, j++)
{
dest[i] = src[j];
}

return (dest);
}
