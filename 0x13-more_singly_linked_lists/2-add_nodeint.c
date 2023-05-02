#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint -function that adds a new node
 *             at the beginning of a listint_t list
 * @head:const listint_t *head
 *@n:int
 * Return: size_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
