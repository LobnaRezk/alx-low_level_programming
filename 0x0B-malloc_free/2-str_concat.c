#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *  _strlen -   function that returns the length of a stringe
 * @s: input of function is pointer
 * Return: return length of a string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
 * str_concat -  function that concatenates two strings
 * @s1:char
 * @s2:char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int s1count, s2count, i;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
s1count =  _strlen(s1);
s2count =  _strlen(s2);

p = malloc((s1count + s2count) *sizeof(char) + 1);
if (p == NULL)
return (0);
for (i = 0; i < s1count + s2count; i++)
{
if (i < s1count)
p[i] = s1[i];
else
p[i] = s2[i - s1count];
}
p[i] = '\0';
return (p);
}
