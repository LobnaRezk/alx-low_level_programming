#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else
{
printf("%d", i);
}
if (i != 100)
	printf(" ");
else
Printf('\n');
}
return (0);
}
