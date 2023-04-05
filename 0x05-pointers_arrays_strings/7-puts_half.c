#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line
 * @str: input of function is pointer
 * Return: Always return 0 (Success)
 */
void puts_half(char *str)
{
int len = 0, i;
while (*str != '\0')
{
len++;
str++;
}

if (len % 2 == 0)
{
i = len / 2;
for(int j = i; j <= len; ++j)
{
putchar(str[j]);
}
}
else
{
i= (length - 1) / 2;
putchar(str[i];
}
putchar('\n');
}
