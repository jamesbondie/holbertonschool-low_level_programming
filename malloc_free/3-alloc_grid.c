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

int **alloc_grid(int width, int height) {
    int i, j;
    int **grid;

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
    }

    for (i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            for (j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
	}
        for (j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

