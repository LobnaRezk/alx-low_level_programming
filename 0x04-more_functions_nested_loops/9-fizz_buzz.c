#include <stdio.h>
/**
 * main - function that checks for uppercase character.
 * Return: 0
 */
int main(void)
{
int n = 100, i;
for (i = 1; i <= n; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf('\n');
return (0);
}
