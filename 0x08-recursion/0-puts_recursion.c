#include "main.h"
/**
 * _puts_recursion -    function that prints a string, followed by a new line.
 * @s: input of function is pointer
 * Return: Always return 0 (Success)
 */
void _puts_recursion(char *s)
{
int i;
for (i = 0; i != '\0'; i++)
{
putchar(s[i]);
}
putchar('\n');
}
