#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *  _strlen -   function that returns the length of a stringe
 * @s: input of function is pointer
 * Return: return length of a string
 */
int _strlen(char **s)
{
int len = 0, i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; s[i][j]; j++)
len++;
}
return (len);
}
/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac:int
 * @av:char of array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
int i, j, len, bufferlen;
char *p;
if (ac == 0 || av == NULL)
return (NULL);
i = j = len = bufferlen = 0;
len = _strlen(av);
p = (char *)malloc(len *sizeof(char) + ac + 1);
if (p == NULL)
return (NULL);
for (i = 0; av[i]; i++)
{
for (j = 0; av[i][j]; j++, bufferlen++)
p[bufferlen] = av[i][j];
p[bufferlen] = '\n';
bufferlen++;
}
p[bufferlen] = '\0';
return (p);
}
