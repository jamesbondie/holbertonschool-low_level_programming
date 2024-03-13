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
int **pointer;
int *str;
int i,j;
pointer = malloc(width *height);
str = malloc(width *height);

if (pointer == NULL)
{
return (NULL);
}

for (i = 0; i < width; i++)
{
	for(j = 0; j < height; j++)
	{
		str[i][j] = 48;
	}
}
**pointer = &str;
return (pointer);
}
