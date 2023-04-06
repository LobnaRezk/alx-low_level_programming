#include "main.h"
/**
 * is_prime_number- function that returns the factorial of a given number.
 * @n: input of function
 * Return: return number is prime
 */
int is_prime_number(int n)
{
if (n == 0 || n == 1)
return (0);
else if ((n % is_prime_number((n / 2) - 1)) == 0)
{
return (1);
}
}
