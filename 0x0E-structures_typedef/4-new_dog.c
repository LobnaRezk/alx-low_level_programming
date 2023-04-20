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
dog_t *dogLo;
int lenn, leno, i;
for (lenn = 0; name[lenn] != '\0'; lenn++)
;
for (leno = 0; owner[leno] != '\0'; leno++)
;
dogLo = malloc(sizeof(doh_t));
if (dogLo == NULL)
return (NULL);
dogLo->name = malloc(lenn * sizeof(dogLo->name));
if (dogLo == NULL)
return (NULL);
for (i = 0; i < lenn; i++)
dogLo->name[i] = name[i];
dogLo->age = age;
dogLo->owner = malloc(leno * sizeof(dogLo->owner));
if (dogLo == NULL)
return (NULL);
for (i = 0; i < leno; i++)
dogLo->owner[i] = owner[i];
return (dogLo);
}
