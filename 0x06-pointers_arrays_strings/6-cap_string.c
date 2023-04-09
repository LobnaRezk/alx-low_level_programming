#include "main.h"
/**
 * cap_string-  function that capitalizes all words of a string
 * @str: an array of integers
 * Return:   Always return 0 (Success)
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0''; i++)
{
if (str[i] ==   ',' || str[i] ==  ';'  || str[i] ==  '.' || str[i] ==   '!' ||
str[i] ==   '?'   ||  str[i] == '"' || str[i] == '(' || str[i] == ')' ||
str[i] == '{' || str[i] == '}')
str[i] = str[i] - 32;
}

return (str);
}
