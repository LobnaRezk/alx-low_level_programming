#include "main.h"
/**
 * _puts_recursion -    function that prints a string, followed by a new line.
 * @s: input of function is pointer
 * Return: Always return 0 (Success)
 */
void _puts_recursion(char *s)
{
/* size_t size = sizeof(s) / sizeof(s[0]);*/
if (*s == '\0')
putchar('\n');
putchar(*s);
_puts_recursion(s + 1);
}
