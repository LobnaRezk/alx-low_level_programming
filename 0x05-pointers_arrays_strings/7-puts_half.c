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
len++;
i = len;
for (i /= 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
