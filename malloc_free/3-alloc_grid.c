#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
   int i = 0;
       	int x = (width + 1) * height;
    int *str = malloc((x + 1) * sizeof(int));

    if (str == NULL) {
        return (NULL);
    }

       while (i < x) {
        if (i % (width+1) == 0 && (i+1) != 0) {
            str[i] = '\n';
        } else {
            str[i] = '0';
        }
        i++;
    }
    str[x] = '\0';
	
	return (str);
    free(str);
}
