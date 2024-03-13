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

int **allocate_grid(int width, int height) {
    int **arr;
    int i, j;

    if (width <= 0 || height <= 0) {
        return NULL;
    }

    arr = (int **)malloc(height * sizeof(int *));
    if (arr == NULL) {
        return NULL;
    }

    for (i = 0; i < height; i++) {
        arr[i] = (int *)malloc(width * sizeof(int));
        
        for (j = 0; j < width; j++) {
            arr[i][j] = 0;
        }
    }

    return arr;
}

