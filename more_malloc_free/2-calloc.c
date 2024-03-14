#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - it has to concat our strings with n number
 * @s1: it is our first char pointer
 * @s2: it is our second char pointer
 * @n: it is our amount of char has to be appended
 * Return: it returns our value
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int b = 0;
unsigned int c = 0;
int *ptr;

if (nmemb == 0 && size == 0)
	return (NULL);
hasil = nmemb *size;
ptr = malloc((nmemb *size)) + 1;

if (ptr == NULL)
	return (NULL);
while (b < hasil)
{
	ptr[b] = c;
	b++;
}
return (ptr);
free (ptr);
}
