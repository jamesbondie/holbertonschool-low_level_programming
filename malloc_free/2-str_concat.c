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
      
        while (s1[len] != '\0')
        {
                len++;
        }
      
      
        while (s2[len2] != '\0')
        {
                len2++;
        }
        pointer = (char *)malloc(len * sizeof(*s1) + len2 * sizeof(*s2) + 1);

	if (pointer == NULL) 
	{
        return (NULL);
	}

        while (i < len)
        {
                pointer[i] = s1[i];
                i++;
        }

        while (c < len2)
        {
                pointer[i] = s2[c];
                c++;
		i++;
        }
	pointer[len+len2] = '\0';
        return (pointer);
}
