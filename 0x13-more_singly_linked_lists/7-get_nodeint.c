#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node of
 *                 a listint_t linked list.
 * @head:const listint_t *head
 * @index:unsigned int
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int coun;
for (coun = 0; coun < index; coun++)
{
if (head->next == NULL)
return (NULL);
head  = head->next;
}
return (head);
}
