#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * p_char - prints characters
  * @c: character to print
  * @separator:char to print
  */
void p_char(char *separator, va_list c)
{
	printf("%s%c", separator, va_arg(c, int));
}
/**
  * p_int - prints integers
  * @i: integer to print
  * @separator:char to print
  */
void p_int(char *separator, va_list i)
{
	printf("%s%d", separator, va_arg(i, int));
}
/**
  * p_float - prints floats
  * @f: float to print
  * @separator:char to print
  */
void p_float(char *separator, va_list f)
{
	printf("%s%f", separator, va_arg(f, double));
}
/**
  * p_str - prints strings
  * @s: string to print
  * @separator:char to print
  */
void p_str(char *separator, va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s%s", separator, string);
}
/**
 * print_all - function that prints anything
 * @format:int
 * Return:0 Always(Success).
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0, j;
char *separator = "";
va_list ar;
v_types valid_types[] = {
{"c", p_char},
{"i", p_int},
{"f", p_float},
{"s", p_str}
};
va_start(ar, format);
while (format && format[i])
{
j = 0;
while (valid_types[j].valid)
{
if (format[i] == valid_types[j].valid[0])
{

valid_types[j].f(separator, ar);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(ar);
}
