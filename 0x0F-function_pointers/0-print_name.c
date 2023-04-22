#include "function_pointers.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_name - function that prints a name
 * @name:char
 * @f: function pointer casted to char pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
