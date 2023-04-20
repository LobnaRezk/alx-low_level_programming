#include <stdio.h>
#include "main.h"
/**
 * _strstr- function that locates a substring.
 * @haystack: array
 * @needle: array
 * Return:array
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int  i; 
for (i = 0; needle[i] < '\0'; i++)
;
while (*haystack != '\0')
{
if (_strncmp(haystack, needle, i) == 0)
return (haystack);
haystack++;
}
return (NULL);
}
