#include "main.h"
/**
 *  _strlen_recursion - function that prints a string in reverse.
 * @s: input of function is pointer
 * Return: return length of array
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s == '\0')
return (len);
len = _strlen_recursion(s + 1) + 1;
}
