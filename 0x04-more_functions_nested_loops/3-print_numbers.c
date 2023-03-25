#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 *                   followed by a new line.
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char c = '0';
for (; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');

}
