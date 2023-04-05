#include "main.h"
/**
 *  factorial - function that returns the factorial of a given number.
 * @n: input of function 
 * Return: return factorial of n 
 */
int factorial(int n)
{
int fac = 0;
if (n < 0)
return (-1);
else if (n == 0)
return 1;
else
return (fac = n * factorial(n - 1)); 
}
