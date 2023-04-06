#include "main.h"
/**
 *  _pow_recursion - function that returns the factorial of a given number.
 * @x: input of function
 * @y: input of function
 * Return: return result of x power y
 */
int _pow_recursion(int x, int y)
{
int result;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (result = x * _pow_recursion(x, y - 1));
}
