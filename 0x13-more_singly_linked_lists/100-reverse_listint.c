#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint- function that reverses a listint_t linked list.
 * @head:const listint_t *head
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
while (head->next == NULL)
{
head = head->next;
}

return (head);
}
