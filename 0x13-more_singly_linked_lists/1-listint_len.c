#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that returns the number of elements 
 *                  in a linked listint_t list
 * @h:const listint_t *h
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
