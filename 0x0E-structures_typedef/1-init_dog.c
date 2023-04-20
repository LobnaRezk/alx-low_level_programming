#include "dog.h"
/**
 * init_dog- function that initialize a variable of type struct dog
 * @dog: struct
 * @name: array of char
 * @age: float
 * @owner: array of char
 * Return: 0 Always (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = *name;
d->age = age;
d->owner = owner;
}
