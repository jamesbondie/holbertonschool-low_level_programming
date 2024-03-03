#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - blabalblablabla
 * @name: jashdkaskdajslkdjlkanameajslkd
 * @age: asdjaklsjdklasdkajsldkog
 * @owner: asdasdasdasdasdag
 * Return: ajsdfnakjsdnfkajsndkfljasn
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *i;
int len1 = 0, len2 = 0;
int j = 0;
if (name == NULL || owner == NULL)
return NULL;
i = malloc(sizeof(dog_t));
if (i == NULL)
return NULL;
while (name[len1] != '\0')
len1++;
while (owner[len2] != '\0')
len2++;
i->name = malloc(len1 + 1);
i->owner = malloc(len2 + 1);
if (i->name == NULL || i->owner == NULL)
{
free(i->name);
free(i->owner);
free(i);
return NULL;
}
while (j <= len1)
{
i->name[j] = name[j];
j++;
}
j = 0;
while (j <= len2)
{
i->owner[j] = owner[j];
j++;
}
i->age = age;
return i;
}
