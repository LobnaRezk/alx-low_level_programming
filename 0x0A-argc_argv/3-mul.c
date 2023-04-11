#include <stdio.h>
/**
 * main -  program that multiplies two numbers
 * @argc: int
 * @argv: an array of chars
 * Return: multaplcation of two numbers
 */
int main(int argc, char *argv[])
{
int mul, result = 1;
if ((argc - 1) < 3)
putchar("Error/n");
else
{
mul = argv[1] * argv[2];
result = mul;
printf("%d\n", mul);
}
return (result);
}
