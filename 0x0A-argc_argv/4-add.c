#include <stdio.h>
/**
 * main -  program that adds positive numbers
 * @argc: int
 * @argv: an array of chars
 * Return: return result of add two numbers
 */
int main(int argc, char *argv[])
{
int result = 0, i;
if (argc == 1)
putchar("0\n");
else
{
for (i = 0; i < argc; i++)
{
if (argv[i] < 48 && argv[i] > 57)
{
putchar("Error\n");
result = 1;
}
else
{
result = result + argv[i];
if (i == (argc - 1))
printf("%d\n", result);
}
}
}
return (result);
}
