#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - it has to concat our strings with n number
 * @b: it is our first char pointer
 * @s2: it is our second char pointer
 * @n: it is our amount of char has to be appended
 * Return: it returns our value
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pointer;
int len1 = 0, len2 = 0, len3 = 0, i = 0, j = 0;
unsigned int b = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
while (b < n)
{
	len3++;
	b++;
}
if (len2 <= len3)
{
	len3 = len2;
}
pointer = malloc(len1 + len3 + 1);
if (pointer == NULL)
{
	return (NULL);
}
while (i < len1)
{
pointer[i] = s1[i];
i++;
}
while (j < len3)
{
pointer[i + j] = s2[j];
j++;
}
pointer[i + j] = '\0';
return (pointer);
}
