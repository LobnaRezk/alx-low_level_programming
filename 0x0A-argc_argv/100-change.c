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
int result = 1, cents, cen;
if (argc == 1)
printf("Error\n");
else
{
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents % 25 == 0)
{
cen = cen + 1;
cents = cents - 25;
}
if (cents % 10 == 0)
{
cen = cen + 1;
cents = cents - 10;
}
if (cents % 5 == 0)
{

cen = cen + 1;
cents = cents - 5;
}

if (cents % 2)
{
cen = cen + 1;
cents = cents - 2;
}
if (cents == 1)
{
cen++;
cents = cents - 1;
printf("%d\n", cen);
}
}
}
result = cen;
return (result);
}
