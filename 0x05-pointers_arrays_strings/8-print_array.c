#include "main.h"
/**
 * print_array -   function that prints n elements of an array of integers,
 *  followed by a new line
 * @a: input of function is pointer
 * @n: input of function is
 * Return: Always return 0 (Success)
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
printf("%i, ", a[i]);
}
}
