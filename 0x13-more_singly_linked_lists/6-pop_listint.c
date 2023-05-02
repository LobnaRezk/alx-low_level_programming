#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -function that deletes the head node of a listint_t 
 *                  linked list, and returns the head node’s data (n).
 * @head:const listint_t *head
 * Return: int 
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *current, *tmp;

if (head == NULL)
return (0);
tmp = current = *head;
if (*head)
{
i = current->n;
*head = current->next;
free(tmp);
}
else
i = 0;
return (i);
}
