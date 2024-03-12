#include "main.h"
#include <stdlib.h>

/**
 * _strdup - our main array creater supervisor
 * @str: asdasdasdasdasdasd
 * asodjaoisjdaiosjdais
 * Return: 1 0 0asdoasdasdasd
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
        char *pointer;
        int len = 0;
        int len2 = 0;
        int i = 0;
        int c = 0;
        if (s1 != NULL)
        {
        while (s1[len] != '\0')
        {
                len++;
        }
        }



        if (s2 != NULL)
        {
        while (s2[len2] != '\0')
        {
                len2++;
        }
        }


        pointer = malloc(len + len2  + 1);
        while (i < len)
        {
                if (s1 == NULL)
                {
                        s1[0] = '\0';
                }
                pointer[i] = s1[i];
                i++;
        }
        while (i < len + len2 + 1)
        {
                if (s2 == NULL)
                {
                        s2[0] = '\0';
                }
                pointer[i] = s2[c];
                i++;
                c++;
        }
        return (pointer);
}
