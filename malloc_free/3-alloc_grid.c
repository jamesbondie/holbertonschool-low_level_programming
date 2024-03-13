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

#include <stdlib.h>

int **allocate_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    int **arr = (int **)malloc(height * sizeof(int *));
    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < height; i++) {
        arr[i] = (int *)malloc(width * sizeof(int));
        if (arr[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);
            return NULL;
        }
        for (int j = 0; j < width; j++) {
            arr[i][j] = 0;
        }
    }

    return arr;
}

