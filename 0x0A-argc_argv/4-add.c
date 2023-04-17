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
while (--argc)
{
for (c = argv[argc]; *c ; c++)
{
if (*c < '0' && *c > '9')
{
printf("Error\n");
return (1);
}
else
{
result = result + atoi(argv[i]);
}
}
}
printf("%d\n", result);
}
return (0);
}
