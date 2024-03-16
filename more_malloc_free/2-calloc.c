#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - it allocate memory with the size of array elements
 * @nmemb: it is our array
 * @size: it is the size of our array variable
 * Return: it returns our value
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int hasil;
unsigned int b = 0;
int *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);
hasil = nmemb *size;
ptr = malloc(hasil);
if (ptr == NULL)
	return (NULL);
while (b < hasil)
{
	ptr[b] = 0;
	b++;
}
return (ptr);
}
