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
int result = 1, i, cen;
int arr[5] = {25, 10, 5, 2, 1};
if (argc == 1)
{
printf("Error\n");
return (1);
}
else if (argv[1] == 0 || argv[1] <= 0)
{
printf("%d\n", 0)
}
else
{
cen = atoi(argv[1]);
for (i = 0; i < 5; i++)
{
if (cen % arr[i] == 0)
{
result++;
cen /= arr[i];
}
}
printf("%d\n", result);
}
return (0);
}
