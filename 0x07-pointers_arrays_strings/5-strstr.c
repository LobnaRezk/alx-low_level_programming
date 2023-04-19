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
while (*haystack != '\0')
{
if (*haystack == '\0')
break;
else if (*haystack == *needle)
return (haystack);
haystack++;
}
return (haystack + 1);
}
