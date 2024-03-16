#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - it allocate memory with the size of array elements
 * @nmemb: it is our array
 * @size: it is the size of our array variable
 * Return: it returns our value
*/
int *array_range(int min, int max)
{
int *ptr;
int i = 0;
int size;
if (min > max)
	return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
	return (NULL);

while (min < max)
{
	ptr[i] = min;
	i++;
	min++;
}


return (ptr);
}
