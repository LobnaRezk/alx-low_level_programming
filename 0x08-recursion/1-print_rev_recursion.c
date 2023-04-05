#include "main.h"
/**
 * _print_rev_recursion -  function that prints a string in reverse.
 * @s: input of function is pointer
 * Return: Always return 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
s++;
_print_rev_recursion(s);
printf("%c", *s);

}
