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
if (array && cmp)
{
for (i = 0; i < size; i++)
cmp(array[i]);
}
}
