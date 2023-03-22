#include <unistd.h>
#include "main.h"
/**
 * Description:prints _putchar, followed by a new line.
 * _putchar - write the character c to stdout
 * 0c: the character to print
 * Return:on Success 1
 *        on error,-1 is returned. and errno is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
