#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -function that frees a listint_t list
 * @head:const listint_t *head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *current;

if (head == NULL)
return;
current = *head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
