#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - good asdasdasdasda
 * aisjdaisjdalksjdlkasjdkl
 * @s: askjdkalksjdkaljsdlkaskd
 * @accept: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
int i = 0;
while (accept[i])
{
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}
return (NULL);
}
