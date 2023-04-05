#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line
 * @str: input of function is pointer
 * Return: Always return 0 (Success)
 */
void puts_half(char *str)
{
int len = 0;/* i*/
while (*str != '\0')
{
len++;
str++;
}
len++;
/*i = len;*/
for (len /= 2; str[len] != '\0'; len++)
{
putchar(str[len]);
}
putchar('\n');
}
