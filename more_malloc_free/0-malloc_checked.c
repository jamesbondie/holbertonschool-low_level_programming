#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - it checks our malloc function
 * @b: it is our unsigned value
 * Return: it returns our value
 *
*/

void *malloc_checked(unsigned int b)
{
int *pointer;
pointer = malloc(b);

if (pointer == NULL)
{
	exit(98);
}
return (pointer);


}
