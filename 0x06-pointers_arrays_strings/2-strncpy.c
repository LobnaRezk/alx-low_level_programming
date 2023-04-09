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
int  j = 0;
for (; j < n && src[j] != '\0'; j++)
{

dest[j] = src[j];
while (j < n)
{
dest[j] = '\0';
j++;
}

}

return (dest);
}
