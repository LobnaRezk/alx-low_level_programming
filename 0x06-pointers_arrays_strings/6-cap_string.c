#include "main.h"
/**
 * cap_string-  function that capitalizes all words of a string
 * @str: an array of integers
 * Return:   Always return 0 (Success)
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (str[i - 1] ==  44 || str[i - 1] ==  59  || str[i - 1] ==  46 ||
str[i - 1] ==  33 || str[i - 1] == 63  ||  str[i - 1] == 34 || str[i - 1] == 40
|| str[i - 1] == 41 || str[i - 1] == 123 || str[i - 1] == 125)
str[i + 1] = str[i + 1] - 32;
}
}
return (str);
}
