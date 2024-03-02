#include "dog.h"
#include <stdio.h>

/**
 * print_dog - gasdfasdfasdfasdf
 * @d: asdasdasdasdasdasdasd
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
