#include "main.h"
/**
 *  swap_int -   function that prints a triangle, followed by a new line
 * @a: input of function is pointer
 * @b: input of function is pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
