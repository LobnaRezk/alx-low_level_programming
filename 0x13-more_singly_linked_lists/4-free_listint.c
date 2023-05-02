#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list
 * @head:const listint_t *head
 * Return: size_t
 */
void free_listint(listint_t *head)
{
if (head == NULL)
return;
free_listint(head->next);
free(head);
}
