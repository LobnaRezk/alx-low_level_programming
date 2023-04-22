#include "function_pointers.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * int_index - function that searches for an integer.
 * @array:array of int
 * @size:int
 * @cmp:function of int
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || !(array) || !(cmp))
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);

return (-1);
}
