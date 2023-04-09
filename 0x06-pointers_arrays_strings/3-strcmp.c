#include "main.h"
/**
 * _strncpy- function that copies a string.
 * @s1: input of function
 * @s2: input of function
 * Return: number of result of compares two strings  
 */
int _strcmp(char *s1, char *s2)
{
int result = 0, i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
result = (((int)s1[i] - 48) - ((int)s2[i] -48));
}
}
return (result);
}
