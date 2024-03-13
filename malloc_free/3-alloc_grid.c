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
    int x = (width + 1) * height;
    char *str = malloc((x + 1) * sizeof(char));

    if (str == NULL) {
        return 1;
    }

    int i = 0;
    while (i < x) {
        if (i % (width+1) == 0 && (i+1) != 0) {
            str[i] = '\n';
        } else {
            str[i] = '0';
        }
        i++;
    }
    str[x] = '\0';

    printf("%s", str);

    free(str);
}
