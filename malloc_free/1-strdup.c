#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - our main array creater supervisor
 * @size: asdasdasdasdasdasd
 * @c: asodjaoisjdaiosjdais
 * Return: 1 0 0asdoasdasdasd
 *
 *
 *
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
char *pointer;

while (str[i] != '\0')
{
	len++;
	i++;
}
i = 0;
pointer = malloc(len + 1);

if (pointer == NULL)
{
return (NULL);
}

while (i < len + 1)
{
pointer[i] = str[i];
i++;
}


return (pointer);
}
