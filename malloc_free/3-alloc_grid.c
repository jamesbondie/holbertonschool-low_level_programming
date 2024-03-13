#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - our main array creater supervisor
 * @width: asdasdasdasdasdasd
 * @height: asodjaoisjdaiosjdais
 * Return: 1 0 0asdoasdasdasd
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;
int x = width * height;
if (x <= 0)
{
return (NULL);
}
arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for(i = 0; i < height; i++)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
