#include "function_pointers.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * array_iterator - function that executes a function given
 *                  as a parameter on each element of an array.
 * @array:array of int
 * @size:size_t
 * @action:function of int
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = -1;
if (array && action)
{
i++;
for (; i < size; i++)
action(array[i]);
}
}
