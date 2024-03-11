#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{

char *array;
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}

if (size != 0)
{
	array = (char*)malloc(size * sizeof(*char));
	while (array)
	{
		c = array[i];
			i++;
	}
}
return (array);

}
