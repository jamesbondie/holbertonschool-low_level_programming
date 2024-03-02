#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - <F12><F12><F12><F11>.
 * @d: <F10><F10><F11><F11>
 * @name: <F11><F11><F11><F11>
 * @age: <F11><F11><F11><F11>
 * @owner: <F11><F11><F11><F11>
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
