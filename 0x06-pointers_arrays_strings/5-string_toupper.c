#include "main.h"
/**
 * string_toupper-  function that changes all lowercase letters of a string
 *                    to uppercase
 * @str : an array of integers
 * Return:   Always return 0 (Success)
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
	str[i] - = 32;

}
}
