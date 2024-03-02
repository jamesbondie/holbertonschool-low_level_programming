#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - gasdfasdfasdfasdf
 * @d: asdasdasdasdasdasdasd
 * sdkjaslkdjaksjdka
 * asdasdasd
 * aksdjalksjflkajskljdalksd
 */
#include <stdlib.h>
#include "dog.h"
void free_dog(dog_t *d)
{
if (d == 0)
return;
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
