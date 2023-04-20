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
dog_t *my_dog;
my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;
return (my_dog);
}
