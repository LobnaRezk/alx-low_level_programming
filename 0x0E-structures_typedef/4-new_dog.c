#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: pointer of char
 * @age: pointer of char
 * @owner: pointer of char
 * Return: pointer of struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
int lenn, leno, i;
for (lenn = 0; name[lenn] != '\0'; lenn++)
;
for (leno = 0; owner[leno] != '\0'; leno++)
;
doggy = malloc(sizeof(dog_doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);

doggy->name = malloc(lenn * sizeof(doggy->name));
if (doggy == NULL)
return (NULL);
for (i = 0; i < lenn; i++)
doggy->name[i] = name[i];

doggy->age = age;

doggy->owner = malloc(leno * sizeof(doggy->owner));
if (doggy == NULL)
return (NULL);
for (i = 0; i < leno; i++)
doggy->owner[i] = owner[i];
return (doggy);
}
