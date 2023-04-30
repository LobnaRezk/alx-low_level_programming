#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string which is a duplicate 
 *           of the string str. Memory for the new string is 
 *           obtained with malloc, and can be freed with free.
 * @str:int
 * Return: char  
 */
char *_strdup(char *str)
{
char *p;
unsigned int len, j;
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
len++;
if (len < 1)
return (NULL);
p = malloc(len * sizeof(char));
if (p == NULL)
{
free(p);
return (NULL);
}
for (j = 0; j < len; j++)
p[j] = str[j];
p[j] = '\0';
return (p);
}
