#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  _strlen -   function that returns the length of a stringe
 * @s: input of function is pointer
 * Return: return length of a string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
 * wordcounter - counts words and the letters in them
 * @str: string to count
 * @pos: position of the word to count characters from
 * @firstchar: position of the first letter of the word
 * if pos = 0, count the number of chars in the word
 * else count number of words
 * Return: wordcount if pos == 0,
 * length of word if pos > 0,
 * position of word if pos > 0 && firstchar > 0
 */
int wordcounter(char *str, int pos, char firstchar)
{
int i = 0, wordcount, charcount, flag = 0;
str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
while (str[i])
{
if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
{
wordcount++;
flag = 1;
}
if (pos > 0 && pos == wordcount)
{
if (pos > 0 && pos == wordcount && firstchar > 0)
return (i);
for (charcount = 0; str[i + charcount + 1] != ' '; charcount++)
;
return (charcount);
}
if (str[i] == ' ')
flag = 0;
i++;
}
return (wordcount);
}
/**
 * strtow -   function that splits a string into words.
 * @str:str of char
 * Return: char of char
 */
char **strtow(char *str)
{
char **p;
int len, wc, i,  wordlen, getfirstchar, j;
if (str == NULL || str == "")
return (NULL);
len = _strlen(str);
wc = wordcounter(str, 0, 0);
if (len == 0 || wc == 0)
return (NULL);
p = malloc((wc + 1) * sizeof(void *));
if (p == NULL)
return (NULL);
for (i = 0, wordlen = 0; i < wc; i++)
{
wordlen = wordcounter(str, i + 1, 0);
if (i == 0 && str[i] != ' ')
wordlen++;
p[i] = malloc(wordlen *sizeof(char) + 1);
if (p[i] == NULL)
{
for ( ; i >= 0; --i)
free(p[i]);
free(p);
return (NULL);
}
getfirstchar = wordcounter(str, i + 1, 1);
if (str[0] != ' ' && i > 0)
getfirstchar++;
else if (str[0] == ' ')
getfirstchar++;
for (j = 0; j < wordlen; j++)
p[i][j] = str[getfirstchar + j];
p[i][j] = '\0';
}
p[i] = NULL;
return (p);
}
