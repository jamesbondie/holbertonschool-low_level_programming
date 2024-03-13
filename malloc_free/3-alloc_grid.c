#include "main.h"
#include <stdlib.h>

/**
 * str_concat - our main array creater supervisor
 * @s1: asdasdasdasdasdasd
 * @s2: asodjaoisjdaiosjdais
 * Return: 1 0 0asdoasdasdasd
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
int *pointer;
int i,j;
pointer = malloc(width * height);
if (pointer == NULL)
{
return (NULL);
}

for (i = 0; i < width; i++)
{
	for(j = 0; j < height; j++)
	{
		pointer[i][j] = '0';
	}
}
return (pointer);
}
