#include "main.h"
/**
 * reverse_array-  function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return:   Always return 0 (Success)
 */
void reverse_array(int *a, int n)
{
int i, j = 0, t;

for (i = (n - 1); j < n ; i--)
{
t = a[j];
a[j] = a[i];
a[i] = t;
j++;
}
}
