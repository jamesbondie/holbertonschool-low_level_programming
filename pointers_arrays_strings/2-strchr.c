#include "main.h"
#include <stddef.h>
/**
 * _memcpy - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * @n: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strchr(char *s, char c)
{
char *yeni;
yeni = s;
if (s == NULL)
{
return (NULL);
}
while (*yeni)
{
if (*yeni == c)
{
return (yeni);
}
yeni++;
}
if (c == '\0')
{
return (yeni);
}
else
{
return (NULL);
}
}
