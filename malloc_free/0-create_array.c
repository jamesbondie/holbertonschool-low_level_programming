#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - our main array creater supervisor
 * @size: asdasdasdasdasdasd
 * @c: asodjaoisjdaiosjdais
 * Return: 1 0 0asdoasdasdasd
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
	array = malloc(size * sizeof(c));
	while (i < size)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[i] = c;
			i++;
	}
}
return (array);

}
