#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that creates a new dog
 * @d: pointer of char
 * Return: 0 Always (Success)
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
