#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make change for
 *             an amount of money
 * @argc: int
 * @argv: an array of chars
 * Return: return min number of cents
 */
int main(int argc, char *argv[])
{
int result = 0, i;
if (argc == 1)
printf("0\n");
else
{
for (i = 0; i < argc; i++)
{
if (argv[i] < 48 && argv[i] > 57)
{
printf("Error\n");
result = 1;
}
else
{
result = result + atoi(argv[i]);
if (i == (argc - 1))
printf("%d\n", result);
}
}
}
return (result);
}
