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
char *c;
c = argv[0];
if (argc == 1)
printf("0\n");
else
{
for (i = 0; i < argc; i++)
{
if (*c < '0' && *c > '9')
{
printf("Error\n");
return (1);
}
else
{
result = result + atoi(argv[i]);
if (i == (argc - 1))
printf("%d\n", result);
}
c++;
}
}
return (0);
}
