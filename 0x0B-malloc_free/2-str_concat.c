#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings
 * @s1:char
 * @s2:char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int s1count, s2count, sizeBuffer, i;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
s1count = 0;
while (s1[s1count] != '\0')
{
s1++;
s1count++;
}
s2count = 0;
while (s2[s2count] != '\0')
{
s2++;
s2count++;
}
sizeBuffer = s1count + s2count + 1;
p = malloc(sizeBuffer *sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < sizeBuffer; i++)
i < s1count ? (p[i] = s1[i]) : (p[i] = s2[i - s1count]);
return (p);
}
