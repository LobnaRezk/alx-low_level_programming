#include "main.h"
/**
 * reverse_array-  function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return:   Always return 0 (Success)
 */
void reverse_array(int *a, int n)
{
int j, i = 0, t;

for (j = (n - 1); i < j; j--, i++)
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
