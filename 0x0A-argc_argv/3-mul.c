#include <stdio.h>
#include <stdlib.h>
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
printf("Error/n");
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
result = mul;
printf("%d\n", mul);
}
return (result);
}
