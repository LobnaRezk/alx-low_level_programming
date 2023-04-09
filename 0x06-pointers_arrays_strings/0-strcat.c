#include "main.h"
/**
 * _strcat- function that concatenates two strings
 * @dest: input of function
 * @src: input of function
 * Return: array of string 
 */
char *_strcat(char *dest, char *src)
{
int i, j, len ;
for (i = 0; dest[i] != '\0'; i++)
;
len = i;
for (j = 0; src[j] != '\0'; j++, len++)
{
dest[len] = src[j];
}
return (dest); 
}
