#include "main.h"
/**
 * reverse_array-  function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return:   Always return 0 (Success)
 */
void reverse_array(int *a, int n)
{
int i, j = 0;
int *ptr = &a;
for (i = n - 1; i >= 0; i--)
{
ptr[j] = a[i];
}
*a = *ptr;
}
