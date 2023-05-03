#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_nodeint_at_index- function that deletes the node at index
 *              index of a listint_t linked list
 * @head:const listint_t *head
 * @index:int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *subsequent;

if (!head || !*head)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
i = 0;
while (i < (index - 1))
{
current = current->next;
if (current == NULL)
return (-1);
i++;
}
subsequent = current->next;
current->next = subsequent->next;
free(subsequent);
return (1);
}
