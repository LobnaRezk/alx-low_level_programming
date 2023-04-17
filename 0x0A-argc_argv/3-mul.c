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
int result = 1;
if ((argc - 1) < 2)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
return (0);
}
