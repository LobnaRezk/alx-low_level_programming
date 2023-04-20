#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: pointer of char
 * @age: pointer of char
 * @owner: pointer of char
 * Return: pointer of struct
 */
dog_t *new_dog(char *name, float age, char *owner);
{
dog_t *doggy;
doggy->name = name;
doggy->age = age;
doggy->owner = owner;
return (doggy);
}
