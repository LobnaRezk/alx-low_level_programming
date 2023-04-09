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
int i, j = 0;
/*if (n > 0){*/
for (i = 0; dest[i] != '\0'; i++)
{
if (j < n)
{
dest[i] = src[j];
j++;
}
}
/*}*/

return (dest);
}
