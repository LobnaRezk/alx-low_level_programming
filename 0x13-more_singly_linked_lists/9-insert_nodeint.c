#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a new node at a
 *           given position.
 * @head:const listint_t *head
 * @idx:int
 * @n:int
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int index = idx;
listint_t *current, *new;

current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (index == 0)
{
new->next = current;
*head = new;
return (*head);
}
while (index > 1)
{
current = current->next;
index--;
if (!current)
{
free(new);
return (NULL);
}
}
new->next = current->next;
current->next = new;
return (new);
}
