#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: array
 * @c: array
 * Return:array
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s);

}
return (s + 1);
}
