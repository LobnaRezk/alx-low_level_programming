#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the
 *                      data (n) of a listint_t linked list.
 * @head:const listint_t *head
 * Return: int
 */
int sum_listint(listint_t *head)
{
listint_t *new;
new = head;
int sum = 0;
while (new)
{
sum = sum + new->n;
new = new->next;
}
return (sum);
}
