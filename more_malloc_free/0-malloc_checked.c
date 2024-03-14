#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
