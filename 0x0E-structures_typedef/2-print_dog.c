#include "dog.h"
/**
 * print_dog - function that initialize a variable of type struct dog
 * @d: struct of pointer
 * Return: 0 Always (Success)
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
if (d->age)
printf("Age: %d\n" d->age);
else
printf("Age: (nil)\n");
if (d->owner)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
}
