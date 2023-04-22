#include <stdio.h>
#include <stdarg.h>

/**
  * main - prints the opcodes of its own main function.
  * @argc:int
  * @argv:array
  * Return: int
  */
int main(int argc, char  **argv[])
{
	char *p = (char *)main;
	int c, i;
	if (argc != 2)
		printf("Error\n"), exit(1);
	c = atoi(argv[1]);
	if ( c < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < c; i++)
		printf("%02hhx%s", *p++, b ? "" : "\n");
	return (0);
}
