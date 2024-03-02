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
dog_t *new_dog(char *name, float age, char*owner) {
dog_t *i;
int name_len, owner_len;
int j;
if (name == NULL || owner == NULL)
return NULL;
i = malloc(sizeof(dog_t));
if (i == NULL)
return NULL;
for (name_len = 0; name[name_len] != '\0'; name_len++);
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++);
i->name = malloc(name_len + 1);
i->owner = malloc(owner_len + 1);
if (i->name == NULL || i->owner == NULL) {
free(i->name);
free(i->owner);
free(i);
return NULL;
}
for (j = 0; j <= name_len; j++)
i->name[j] = name[j];
for (j = 0; j <= owner_len; j++)
i->owner[j] = owner[j];
i->age = age;
return i;
}

